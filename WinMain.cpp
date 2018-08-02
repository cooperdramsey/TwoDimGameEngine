#include "WinMain.h"

//Additional inclusions
#ifndef _STRING_H
#include "string.h"
#endif
#ifndef _IOSTREAM_H
	#include "iostream.h"
#endif

#if defined (DEBUG) | defined(_DEBUG)
int _tmain(int argc, char* argv[])
{
	UNREFERENCED_PARAMETER(argc); //Tells the function we are not using the variable specified
	UNREFERENCED_PARAMETER(argv); // same as above

	//Logger::Log("Starting the program"); //Tells the console the program has started

	//Run WinMain function
	WinMain((HINSTANCE)GetModuleHandle(NULL), 0, 0, SW_SHOW);
}
#endif

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//None of these variables are being used
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);

	//Way to handle memeory leaks while in debug mode
#if defined (DEBUG) | (_DEBUG)
	HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);

	//Enable run-time memory leak check for debug builds
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(0); //Points at object causing a memory leak
#endif

	//Create the engine class
	//Engine* pEngine = new Engine();

	//Kick off the game
	//int result = pEngine->RunLoop();

	//Delete the Engine
	//delete pEngine;

	//return result;

	return 0; //TODO remove this
}
