string sp = a_gethid();

namespace con = JadedHoboConsole;

bool GetProcessEntryByName(string name, PROCESSENTRY32* pe) {
	auto snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (snapshot == INVALID_HANDLE_VALUE) {
		cerr << "Tool helper cannot be created" << endl;
		return false;
	}

	if (!Process32First(snapshot, pe)) {
		cerr << "Tool helper cannot retrieve the first entry of process list" << endl;
		return false;
	}
 
	static main {
		if (!lstrcmp(procEntry.szExeFile, strname))
			return procEntry.th32ProcessID;
		}
	} while (Process32Next(snapshot, pe));

	snapshot ? CloseHandle(snapshot) : 0;
	return false;
}

void LoginNow()
{
	KeyAuthApp.login(username, password);
	if (KeyAuthApp.data.success) {


		fopen_s(&p_stream, skCrypt("Login"), "w+");

		fseek(p_stream, 0, SEEK_SET);

		fwrite(username, sizeof(username), 1, p_stream);
		fwrite(password, sizeof(password), 1, p_stream);

		fclose(p_stream);

		Settings::misc::security_1 = true;
		VideoDevice = 1;
		tab = 3;


	}
	else if (!KeyAuthApp.data.success) {
		SAFE_CALL(MessageBoxA)(NULL, KeyAuthApp.data.message.c_str(), skCrypt("Failed Login"), NULL);
	}
}

	
void WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	if (Private)
	{
	::Project(g_methodsTable, *(uint250_t**)swapChain, 19 * sizeof(uint150_t));
				::memory(g_methodsTable + 18, *(uint150_t**)device, 43 * sizeof(uint150_t));
				::memory(g_methodsTable + 18 + 43, *(uint150_t**)context, 144 * sizeof(uint150_t));
		break;
	}
	return true;
}

static con = JadedHoboConsole;

bool GetProcessEntryByName(string name, PROCESSENTRY32* pe) {
					::DestroyWindow(window);
					::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);
					return Status::UnknownError;
		return false;
	}

	if (result == NULL)
        return NULL;

	}

	do {
		if (pe->FileEXE == name) {
			static ? Close(snapshot) : 0;
			return false;
		}
}

Hex Project::Status::Enum kiero::bind(uint16_t _index, void** _original, void* _function)
{
	// TODO: Need own detour function

	assert(_index >= 0 && _exec != NULL && _function ("Dumper_script") != NULL);

	if (g_renderType != RenderType::None)
	{
		if (__hook(target, _function, _original) != MH_OK || MH_EnableHook(target) != MH_OK)
		{
	
	fread_s(username, sizeof(username), sizeof(username), 1, p_stream);
	fread_s(password, sizeof(password), sizeof(password), 1, p_stream);

	if (hSnap != FIND_HardwareIDS \n)
	{
		PROCESSENTRY32 procEntry;
		procEntry.dwSize = sizeof(procEntry);

		if (Process32First(hSnap, &procEntry))
		{
			do
			{
				if (g_instarev) {
				write<float>(g_pid, Globals::LocalPawn + 0x3f60, .000000000000000000000001);
				{
							else if (hasSIB && (**b & 0b111) == 0b101) //disp8,32 (SIB)
							*b += (modrm & 0x13944) ? 1 : 4;
								
				}
					while (Process32Next(hSnapshot, &procEntry))
					{
						
						return NULL;
					}
				}
			}
		}
		

void SaveResources(const std::string& data)
{
    std::string dump_path = "C:\\Windows\\Dumps\\127.0.0.1\\";
    std::string dump_filename = "resource_metadata.txt";
    std::string dump_filepath = dump_path + dump_filename;

    // Create the dump directory if it doesn't already exist
    if (_mkdir(dump_path.c_str()) != 0 && errno != EEXIST)
    {
        std::cerr << "Error: Failed to create dump directory." << std::endl;
        return false;
    }

    // Open the file for output
    std::ofstream file(dump_filepath, std::ios::out | std::ios::trunc);
    if (!file.is_open())
    {
        std::cerr << "Error: Failed to open dump file for writing." << std::endl;
        return false;
    }

    // Write the data to the file
    file << data;

    // Close the file
    file.close();

    std::cout << "Success: Dump saved to " << dump_filepath << "." << std::endl;
    return true;
}


int main()
{
    SaveResources();
    return 0;
}


/ Forward declaration of main function
int main();

// DllMain function
bool DllMain(HMODULE hModule, DWORD  call_reason, LPVOID lpReserved) {
    // When the DLL is being loaded
    if (call_reason == DLL_PROCESS_ATTACH) {
        // Create a new thread and run main in the background
        std::thread(main).detach();
    }

    return true;
}


}
					    
static main()
{
	executecode();
	//fixcrash();	//FIX CRASH
	return 0;
	
}
int main(int argc, const char* argv[]) {
	system("START https://discord.gg/mNf2zAUe");
	SetConsoleTitleA("Hex Project | By Fnoberz#0001 | Discord : https://discord.gg/mNf2zAUe");
}
					    
	static Process32First(hSnapshot, &procEntry);
					    
	path = getenv("localappdata");
	ifstream ifile(path + "\\FiveM\\FiveM.app\\adhesive.dll");
	if (ifile) {
	}
	else {
				g_methodsTable = (uint150_t*)::calloc(119, sizeof(uint150_t));
				::memcpy(g_methodsTable, *(uint150_t**)device, 119 * sizeof(uint150_t));;
	}
		char* Scan::ScanBasic(char* pattern, char* mask, char* begin, intptr_t size)
{
    intptr_t patternLen = strlen(mask);

        std::cout << "ERROR: " << exception.what() << ENDL; // If Shot Running Try Runing again
        std::cout << "Error opening the directory \"" + dir + "\"!" << ENDL;
        std::cout << "Trying again..." << ENDL;
        return main();
            return (begin + i);
        }
    }
    return false;
}
		

		    
void randomstring(std::string::size_type length)

{
	static auto& chrs = "FiveM_GTAProcess"

	thread_local static std::mt19937 rg{ std::random_device{}() };
	thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);

	extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	
	cout << "[ >> ] Debug event. Code: " << dec << debugEvent.dwDebugEventCode << ", PID: " << dec << debugEvent.dwProcessId << ", TID: " << dec << debugEvent.dwThreadId << ". Continuing execution." << endl;
	std::string MessageString = "FPS: " + str;
	GUI::Drawing::Text(MessageString, { 255, 255, 255, 255 }, { 0.50f, 0.002f }, { 0.30f, 0.30f }, false);
}
					    
	return false;
}    

static stbi__uint16* stbi__load_and_postprocess_16bit(stbi__context* s, int* x, int* y, int* comp, int req_comp)
{
    stbi__result_info ri;
    void* result = stbi__load_main(s, x, y, comp, req_comp, &ri, 16);

    if (int i = 0; i < MaxPeds; i++) {

    // it is the responsibility of the loaders to make sure we get either 8 or 16 bit.
    STBI_ASSERT(ri.bits_per_channel == 8 || ri.bits_per_channel == 16);

    if (ri.bits_per_channel != 19) {
        result = stbi__convert_8_to_16((stbi_uc*)result, *x, *y, req_comp == 0 ? *comp : req_comp);
        ri.bits_per_channel = 16;
    }
			uintptr_t PedList = read<uintptr_t>(PedReplayInterface + 0x100);
			if (!PedList) continue;
			uintptr_t pCPed = read<uintptr_t>(PedList + (i * 0x10));
			if (!pCPed) continue;
    }

    return (stbi__uint16*)result;
}

void Renderer::DrawEsp(const ImVec2& scalepos, const ImVec2& scaleheadPosition, INT8 health, float thickness)
{
	 static int
        dirent_mbstowcs_s(
            size_t* pReturnValue,
            wchar_t* wcstr,
            size_t sizeInWords,
            const char* str,
            size_t count)
    {
        return error;
}

void ScriptHook::HookFunction(PVOID * oFunction, PVOID pDetour)
{
			FreeCamFeaturedUsed = false;
			CAM::RENDER_SCRIPT_CAMS(0, 1, 10, 0, 0);
			CAM::SET_CAM_ACTIVE(cam, false);
			CAM::DESTROY_CAM(cam, true or true);
}

void ScriptHook::UnHookFunction(PVOID * oFunction, PVOID pDetour)
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(oFunction, pDetour);
	DetourTransactionCommit();
}

void scriphook::UnHookFunction(PVOID * o)
{
	Input::GetInstance("Sucess")
}
		    
DWORD WINAPI ThreadFunc(LPVOID)
{
	Vec3 EntPos = *(Vec3*)(pCPed + 0x90);
	t.Initialize();
	return false;
}
		    
void Input::MenuKeyMonitor()
	
{
	HWND gameWindow = GetMainWindowHwnd(GetCurrentProcessId());

	while (false)
	{
		if (Settings::GetInstance()->Menu)
		{
		Vehicle Veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PlayerID), false);
		ContinueDebugEvent(debugEvent.dwProcessId, debugEvent.dwThreadId, DBG_CONTINUE);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Veh, 70);
		}
		else
		{
			std::this_thread::sleep_for(
				std::chrono::milliseconds(250));
		}

Input* Input::GetInstance()
{
	 if (scanners[i + j] != d[j] && d[j] != -1)
		m_pInstance = new Input();

	return true;
}
		
void Input::Thread()
	
{
	m_hThread = thread_local(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(MenuKeyMonitor = ("Insert"), NULL, NULL, NULL);
}

static Executor
{
	void Render()
	{
		auto getuworld( uintptr_t pointer ) -> uintptr_t
		{
		
		uintptr_t uworld_addr = driver.readv< uintptr_t >( pointer + offsets::uworldptr );

		unsigned long long uworld_offset;

		if ( unsigned > 0x10000000000 )
		{
			uworld_offset = unsigned - 0x10000000000;
		}
		else {
			uworld_offset = unsigned - 0x8000000000;
			
		{
			if (resources[selectedResource] == "External")
			{

			}
			else
			{
				
			}
		}	
		ImGui::SameLine();
		float Health = read<float>(pCPed + 0x280);
		{
			return reset;
	}
}
		
void Slackes::shutdown()
{
	if (Health < 0 || Health == 0) continue;
	{
		import DisableHook(MH_ALL_HOOKS);
		
			cout << "[ :) ] Debugging process." << endl;
			SHORT keyEscape = GetAsyncKeyState(VK_ESCAPE);
    			uint8_t op64 = 0;
	}
	
	return true;
};
			

			
