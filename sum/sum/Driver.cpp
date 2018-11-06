#include <iostream>
#include <string>

using namespace std;
int Sum(int num)
{
	// square numbers
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return (num * num) + Sum(num - 1);
	}
}
int main()
{
	int num = 4, sum = 0;
	cout << " enter in a digit " << endl;
	cin >> num;
	while (num > 0)
	{
		
	}

	cout << "the sum of all the numbers is " << sum << "!" << endl;
	system("PAUSE");
	return 0;
}