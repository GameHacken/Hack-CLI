#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <Windows.h>

using namespace std;


int FirstSetup() {
    cout << "Welcome to the First Setup!" << endl;
    cout << "Please select a startup option: " << endl;
    int StartupSelection = 0;
    cin >> StartupSelection;
}

int startup() {
    for (int i = 1; i <= 2; ++i) {
        cout << "Initializing Program..." << endl;
        Sleep(250);
        cout << "Initializing Program.." << endl;
        Sleep(250);
    }
    Sleep(500);
    cout << endl << "Program Initialized!" << endl << endl;
    return mainMenu();
}

int silentStartup() {
    cout << "Initializing Silent startup..." << endl;
    Sleep(500);
    cout << "Program Initialized!" << endl;
    return mainMenu();
}

int debugStartup() {
    cout << "Initializing Debug startup..." << endl;
    Sleep(500);
    cout << "Program Initialized!" << endl;
    return mainMenu();
}

int optionsMenu() {
    cout << "Welcome to the Options Menu!" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Change startup options" << endl;
    cout << "2. Change Health Steps" << endl;
    cout << "3. Change Ammo Steps" << endl;
    int SettingsSelection = 0;
    cin >> SettingsSelection;
    switch (SettingsSelection) {
        case 1:
            cout << "Changing Startup Options..." << endl;
            Sleep(500);
            cout << "Startup Options Changed!" << endl;
            break;
        case 2:
            cout << "Changing Health Steps..." << endl;
            Sleep(500);
            cout << "Health Steps Changed!" << endl;
            break;
        case 3:
            cout << "Changing Ammo Steps..." << endl;
            Sleep(500);
            cout << "Ammo Steps Changed!" << endl;
            break;
        default:
            cout << "Invalid Selection!" << endl;
            Sleep(2000);
            break;
    }
    return 0;
}

int healthSteps() {
    cout << "Please enter the new health steps: ";
    int healthSteps = 0;
    cin >> healthSteps;
    cout << "Health steps changed to " << healthSteps << "!" << endl;
    return optionsMenu();
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
            optionsMenu();
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
    return 0;
}

int main() {
    if (true) { // if config file doesnt exsist then run first setup
        FirstSetup();
    }
    else if (true) { // if config file states normal startup
        startup();
    }
    else if (true) { // if config file states silent startup
        silentStartup();
    }
    else if (true) { // if config file states debug startup
        debugStartup();
    }
    else {
        cout << "Error: Config file is corrupted!" << endl;
        Sleep(2000);
        cout << "Please run First Setup!" << endl;
        Sleep(2000);
        FirstSetup();
    }
    return 0;
}