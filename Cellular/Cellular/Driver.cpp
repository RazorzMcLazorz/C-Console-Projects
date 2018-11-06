#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int Sum(int time, int ave)
{
    if (time == 0)
	{
		return 1;
	}
	else 
	{
		time = time - ave;
		return 2 * Sum(time, ave);
	}
}
int main()
{
	
	int ave, time, slices;
	cout << "average time of organism" << endl;
	cin >> ave;
	cout << "time of the experiment" << endl;
	cin >> time;

	slices = Sum(time, ave);

	cout << "the organism split " << slices << " times" << endl;
	system("PAUSE");
	return 0;
}