#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int x;
	vector<int> victor;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	do
	{
	cout << "vector 1" << endl;
	cin >> victor[0];
	cout << "vector 2" << endl;
	cin >> victor[1];
	cout << "vector 3" << endl;
	cin >> victor[2];

	try
	{
	//protect this code
	if (x == 0)
	{
		//throw guests;
	}
		
	if (x < 0)
	{
		//throw NegativeGuests(guests);
	}
		
	//otherwise
	//pieces = 50.0 / guests;
	//cout << " Each person gets " << pieces << " portions of maggity haggis " << endl;
	}
	}while (x != -9);
	
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	system("PAUSE");
	return 0;
}