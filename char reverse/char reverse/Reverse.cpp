#include <string>
#include <iostream>

using namespace std;

int main()
{
	int how = 0, num;
	char streak[] = "!A na teg uoy dna em esreveR";
	char *Ptr;
	Ptr = streak;
	while (*Ptr != '\0')
	{
		how += 1;
		Ptr++;
	}
	cout << how << endl;
	while (how > 0)
	{
		cout << *Ptr;
		Ptr--;
		how--;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}