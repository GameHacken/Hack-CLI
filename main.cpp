#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int startup() {
    for (int i = 1; i <= 2; ++i) {
        cout << "Initializing Program..." << endl;
        Sleep(250);
        cout << "Initializing Program.." << endl;
        Sleep(250);
    }
    Sleep(500);
    cout << endl << "Program Initialized!" << endl << endl;
    return 0;
}

int mainMenu() {
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
            return mainMenu(); //bugged fuck this
    }
    return 0;
}

int main() {
    startup();
    mainMenu();
    return 0;
}