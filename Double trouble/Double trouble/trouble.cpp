#include <iostream>
#include <string>

using namespace std;

int main()
{
	double trouble;
	cout << "Enter a decimal number" << endl;
	cin >> trouble;
	

	int left = (int)(trouble);
	double r = trouble - left;

	int leftSum = 0;
	while(left > 0)
	{
		leftSum += left % 10;
		left = left / 10;
	}

	int right = (int)(r * 1000000);

	int rightSum = 0;
	while(right > 0)
	{
		rightSum += right % 10;
		right = right / 10;
	}

	
	cout << right << endl;
	cout << rightSum << endl;
	int total = leftSum - rightSum;
	cout << total << endl;
	system("PAUSE");
	return 0;
}