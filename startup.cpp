#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <Windows.h>
#include <fstream>
#include "startup.h"
#include "menu.h"
#include "setup.h"

using namespace std;

// Normal startup for the program, will include basic warnings and errors but wont include any log messages.
void normalStartup() {
    cout << endl << "Program Initialized!" << endl << endl;
    mainMenu();
}

// Silent startup for the program, will include no warnings or errors even if  important may errors occur!
void silentStartup() {
    cout << "Initializing Silent startup..." << endl;
    cout << "Program Initialized!" << endl;
    mainMenu();
}

// Debug startup for the program, will include all warnings errors and log messages.
void debugStartup() {
    cout << "Initializing Debug startup..." << endl;
    Sleep(500);
    cout << "Program Initialized!" << endl;
    mainMenu();
}
