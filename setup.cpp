#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <Windows.h>
#include "startup.h"
#include "menu.h"
#include "setup.h"

using namespace std;

//First setup for the program, this will include the basic settings, such as what games do you want to mod and what startup options do you want to use
void FirstSetup() {
    cout << "Welcome to the First Setup!" << endl;
    cout << "Select the game you want to mod: " << endl;
    cout << "1. Assault Cube" << endl;
    int StartupSelection = 0;
    cin >> StartupSelection;
    mainMenu();
    return;
}