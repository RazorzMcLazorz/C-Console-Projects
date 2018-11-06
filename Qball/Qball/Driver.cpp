#include "Queue.h"
#include "iostream"

int main()
{
	Queue cute;
	string again = "yes";
	string superhero = "";

	while (again == "yes")
	{
		cout << "Enter a superhero!" << endl;
		cin >> superhero;

		cute.push(superhero);

		cout << "Enter 'no' to quit" << endl;
		cin >> again;
	}
	cute.Display();

	cute.pop();

	cute.Display();

	system("PAUSE");
	return 0;
}