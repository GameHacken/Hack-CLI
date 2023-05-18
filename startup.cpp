#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <Windows.h>
#include "startup.h"
#include "menu.h"

using namespace std;

//First setup for the program, this will include the basic settings, such as what games do you want to mod and what startup options do you want to use
void normalStartup() {
    for (int i = 1; i <= 2; ++i) {
        cout << "Initializing Program..." << endl;
        Sleep(250);
        cout << "Initializing Program.." << endl;
        Sleep(250);
    }
    Sleep(500);
    cout << endl << "Program Initialized!" << endl << endl;
    mainMenu();
}

void silentStartup() {
    cout << "Initializing Silent startup..." << endl;
    for (int i = 1; i <= 2; ++i) {
        cout << "Initializing Program..." << endl;
        Sleep(250);
        cout << "Initializing Program.." << endl;
        Sleep(250);
    }
    cout << "Program Initialized!" << endl;
    mainMenu();
}

void debugStartup() {
    cout << "Initializing Debug startup..." << endl;
    Sleep(500);
    cout << "Program Initialized!" << endl;
    mainMenu();
}
