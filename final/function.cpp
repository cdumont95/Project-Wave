#include"header.h"

//This function switches the mouse buttons on the user. They have the ability to change them back immediately after initial switch
void ButtonSwitch()
{
	//Initial swap of the mouse buttons
	int result = MessageBox(NULL, TEXT("Press 'Yes' to swap mouse buttons. You can see for yourself that they are switched. You will have an option to switch them back."), TEXT("Mouse Button Switch"), MB_YESNO);
	switch (result)
	{
	case IDYES:
		SwapMouseButton(TRUE);
		break;
	case IDNO:
		break;
	}

	//Swapping the mouse buttons back to normal
	int retry = MessageBox(NULL, TEXT("Would you like to switch them back?"), TEXT("Mouse Button Switch"), MB_YESNO);
	switch (retry)
	{
	case IDYES:
		SwapMouseButton(FALSE);
		break;
	case IDNO:
		break;
	}
}

//This function demonstrates adware and popups. It launches a message box that persists 5 times.
void Adware()
{
	for (int i = 1; i < 6; i++)
	{
		MessageBox(NULL, TEXT("This is an example of a persistent attack such as adware. This will only persist for 5 message boxes. However, a real piece of adware would utilize an infinite loop."), TEXT("GET A FREE XBOX ONE!!!"), MB_OK);
	}
}

//This function demonstrates some command line arguments that malware has the ability to perform.
void CommandLine()
{
	//Pings google.com
	MessageBox(NULL, TEXT("You are about to witness a common act of malware. This program will launch a ping to google. However, real malware will try to ping nodes on the network for new entry points. It also would not show the actual ping process."), TEXT("Ping"), MB_OK);
	system("ping www.google.com");

	//Closes all instances of chrome.exe that are currently running on the victim machine
	MessageBox(NULL, TEXT("You are about to witness a common act of malware. This program will close Google Chrome. Normally, malware will use this to disable anti-virus programs. If Chrome is currently closed, please run it to witness the magic. If you have tabs open, you will be able restore them when you re-launch chrome or use Ctrl-Shift-T."), TEXT("Application Close"), MB_OK);
	system("taskkill /F /T /IM chrome.exe");
}

//This function demonstrates a fork bomb. It creates a file onto the desktop and then launches it 10 times.
void ForkBomb()
{
	int b = 5; //intialize variable for do-while loop

	MessageBox(NULL, TEXT("You are about to witness a small Fork Bomb attack. A file called fork.txt will be created on your Desktop and will then be opened 10 times. A real fork bomb would use an infinite loop. Malware also uses this to drop other programs such as backdoors on a system."), TEXT("File Manipulation and Fork Bomb"), MB_OK);

	//Create file on the desktop of victim machine. Utilizes Windows API.
	ofstream file;

	TCHAR appData[MAX_PATH];
	if (SUCCEEDED(SHGetFolderPath(NULL,
		CSIDL_DESKTOPDIRECTORY | CSIDL_FLAG_CREATE,
		NULL,
		SHGFP_TYPE_CURRENT,
		appData)))

		wcout << appData << endl;
	std::basic_ostringstream<TCHAR> file_path;
	file_path << appData << _TEXT("\\fork.txt");
	file.open(file_path.str().c_str());
	file << "This is an example of a fork bomb!\n";
	file.close();

	//run the file to show example of fork bomb
	do {
		system("start %userprofile%\\Desktop\\fork.txt");
		system("start %userprofile%\\Desktop\\fork.txt");
		b++;
	} while (b < FORK);
}

//This function locks the cursor at specified coordinates. The cursor is still able to move but will continuously return to the coordinates specified.
void CursorLock()
{
	MessageBox(NULL, TEXT("Your cursor is about to be locked! Don't worry, it will stop."), TEXT("Cursor repositioning"), MB_OK);
	int a = 1;

	while (a < CURS_LOCK)
	{
		BlockInput(TRUE);
		SetCursorPos(CURSOR_X, CURSOR_Y);
		Sleep(SLEEP);
		a++;
	}
}

//This function demonstrates the ability for malware to auto-type and execute commands or leave messages to the victims.
void autoType(const string& message, unsigned int millis_per_char)
{
	for (const char c : message)
	{
		cout << c << flush;
		sleep_for(milliseconds(millis_per_char));
	}
}