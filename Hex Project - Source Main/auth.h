#pragma once

#define _WIN32_DCOM
#include <iostream>
#include <string>
#include <comdef.h>
#include <Wbemidl.h>
#include <wininet.h>

#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "wbemuuid.lib")

inline std::string ReplaceAll(std::string subject, const std::string& search,
                              const std::string& replace) noexcept
{
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
    return subject;
}

inline std::string DownloadURL(const std::string& URL)
{
    HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, nullptr, nullptr, nullptr);
    if (!interwebs) {
        std::cerr << "Error: Failed to initialize WinINet.\n";
        return "";
    }
    HINTERNET urlFile = InternetOpenUrlA(interwebs, URL.c_str(), nullptr, nullptr, NULL, NULL);
    if (!urlFile) {
        std::cerr << "Error: Failed to open URL.\n";
        InternetCloseHandle(interwebs);
        return "";
    }
    std::string rtn;
    char buffer[2000];
    DWORD bytesRead;
    do {
        if (!InternetReadFile(urlFile, buffer, sizeof(buffer), &bytesRead)) {
            std::cerr << "Error: Failed to read from URL.\n";
            break;
        }
        rtn.append(buffer, bytesRead);
        std::memset(buffer, 0, sizeof(buffer));
    } while (bytesRead);
    InternetCloseHandle(interwebs);
    InternetCloseHandle(urlFile);
    return ReplaceAll(rtn, "|n", "\r\n");
}

inline std::string Ws2s(const std::wstring& s)
{
    int len;
    int slength = static_cast<int>(s.length()) + 1;
    len = WideCharToMultiByte(CP_ACP, 0, s.c_str(), slength, nullptr, 0, nullptr, nullptr);
    if (len == 0) {
        std::cerr << "Error: Failed to convert wide string to narrow string.\n";
        return "";
    }
    std::unique_ptr<char[]> buf(new char[len]);
    if (!WideCharToMultiByte(CP_ACP, 0, s.c_str(), slength, buf.get(), len, nullptr, nullptr)) {
        std::cerr << "Error: Failed to convert wide string to narrow string.\n";
        return "";
    }
    return std::string
  }
}


void LoginNow(const char *username, const char *password)
{
    KeyAuthApp.login(username, password);
    if (KeyAuthApp.data.success) {
        FILE *p_stream;
        if (fopen_s(&p_stream, skCrypt("Login"), "w+") == 0) {
            fseek(p_stream, 0, SEEK_SET);
            fwrite(username, strlen(username) + 1, 1, p_stream);
            fwrite(password, strlen(password) + 1, 1, p_stream);
            fclose(p_stream);
            Settings::misc::security_1 = true;
            VideoDevice = 1;
            tab = 3;
        } else {
            // Handle error opening file
        }
    } else {
        MessageBoxA(NULL, KeyAuthApp.data.message.c_str(), skCrypt("Failed Login"), MB_OK);
    }
}


void TextEditor::SetLanguageDefinition(const LanguageDefinition& aLanguageDef)
{
	mLanguageDefinition = aLanguageDef;
	mRegexList.clear();

	for (auto& r : mLanguageDefinition.mTokenRegexStrings)
		mRegexList.push_back(std::make_pair(std::regex(r.first, std::regex_constants::optimize), r.second));

	Colorize();
}
