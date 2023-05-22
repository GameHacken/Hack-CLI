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

//First setup for the program, this will include the basic settings, such as what games do you want to mod and what startup options do you want to use
void FirstSetup() {
    cout << "Welcome to the First Setup!" << endl;
    cout << "Select the game you want to setup: " << endl;
    cout << "1. Assault Cube" << endl;
    int StartupSelection;
    cin >> StartupSelection;

    ofstream file("config.txt"); 
    if (file.is_open()) {
        file << StartupSelection;
        file.close();
    }
    else {
        cout << "Unable to open file";
    }
    cout << "What type of startup do you want to use?" << endl;
    cout << "1. Normal" << endl;
    cout << "2. Minimized" << endl;
    cout << "3. Hidden" << endl;
    int StartupType;
    cin >> StartupType;
    ofstream file2("startup.txt");
    if (file2.is_open()) {
        file2 << StartupType;
        file2.close();
    }
    else {
        cout << "Unable to open file";
    }
    cout << "Setup complete!" << endl;
    mainMenu();
    return;
}