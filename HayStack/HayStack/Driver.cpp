#include "Stack.h"
int main()
{
	Stack able;
	char ish[] = "!A nH tYg uoy dnH Ym YsrYvYR";
	int counter = 0;
	while (ish[counter] != '\0')
	{
		able.Push(ish[counter]);
		counter++;
	}
	while (counter > 0)
	{
		cout << able.Peak();
		able.Pop();
		counter--;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}