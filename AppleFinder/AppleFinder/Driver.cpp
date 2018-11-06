#include <iostream>
#include <string>
using namespace std;

void Sum(int area)
{
    if (area < 10)
	{
		cout << area << endl;
	}
	else
	{
		cout << area % 10 << endl;
		Sum(area / 10);
	}
}
int main()
{
	int area = 0;

	cout << "Please enter a number." << endl;
	cin >> area;

	cout << area << endl;
	Sum(area);
	system("PAUSE");
	return 0;
}
