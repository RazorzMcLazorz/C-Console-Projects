#include <string>
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <MMSystem.h>


using namespace std;

int main()
{
	char coal;
	cout << "Select Sound\n\n1 - Trouble\n2 - Alive\n3 - flushed\n4 - Amazed" << endl;
	cin >> choice;

	switch (choice)
	{
		case 1:
		PlaySound(TEXT("Trouble.wav"), NULL, SND_SYNC)
			case 2:
		PlaySound(TEXT("Trouble.wav"), NULL, SND_SYNC)
			case 3:
		PlaySound(TEXT("Trouble.wav"), NULL, SND_SYNC)
			case 4:
		PlaySound(TEXT("Trouble.wav"), NULL, SND_SYNC)
	}

	cout << "press y to continue" << endl;

	system("PAUSE");
	return 0;
}

