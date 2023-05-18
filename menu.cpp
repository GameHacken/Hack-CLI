#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <Windows.h>
#include "menu.h"
#include "startup.h"

using namespace std;

//First setup for the program, this will include the basic settings, such as what games do you want to mod and what startup options do you want to use
void mainMenu() {
    cout << "Welcome to the Main Menu!" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Options" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter a selection: ";
    int selection = 0;
    cin >> selection;
    switch (selection) {
        case 1:
            cout << "Start injection..." << endl;
            Sleep(500);
            cout << "Injection Started!" << endl;
            break;
        case 2:
            cout << "Opening Options..." << endl;
            Sleep(500);
            cout << "Options Opened!" << endl;
            break;
        case 3:
            cout << "Exiting Program..." << endl;
            Sleep(500);
            cout << "Program Exited!" << endl;
            break;
        default:
            cout << "Invalid Selection!" << endl;
            Sleep(2000);
            break;
    }
    return;
}