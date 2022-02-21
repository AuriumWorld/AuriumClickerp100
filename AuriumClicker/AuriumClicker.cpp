#include <iostream>
#include <windows.h>

using namespace std;

void Clicker() {

	while (true) {

		if (GetAsyncKeyState(VK_XBUTTON2)) { // mouse5
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //left mouse down
			Sleep(25 + (rand() % 15)); //delay
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //left mouse up
			Sleep(25 + (rand() % 15)); //delay
		}
		else if
			(GetAsyncKeyState(VK_XBUTTON1)) { // mouse4
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0); //right mouse down
			Sleep(25 + (rand() % 15)); //delay
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0); //right mouse up
			Sleep(25 + (rand() % 15)); //delay
		}

	}
}

int main()
{
	cout << " _____         _           _____ _ _     _           " << endl;
	cout << "|  _  |_ _ ___|_|_ _ _____|     | |_|___| |_ ___ ___ " << endl;
	cout << "|     | | |  _| | | |     |   --| | |  _| '_| -_|  _|" << endl;
	cout << "|__|__|___|_| |_|___|_|_|_|_____|_|_|___|_,_|___|_|  " << endl;
	cout << "                                                     " << endl;
	cout << "MOUSE5 - LEFT CLICK" << endl;
	cout << "MOUSE4 - RIGHT CLICK" << endl;
	cout << "aurium24k#0001 v1.0" << endl;
	Clicker();
}