#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() {
    cout << "Initializing Program..." << endl;
    int a = 1;
    while(true){
        cout << a << endl;
        a++;
        Sleep(1000);
    }
    return 0;
}
