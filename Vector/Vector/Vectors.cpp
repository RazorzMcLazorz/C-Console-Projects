#include <iomanip>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	double x, h = 5, e,r,t,y, sum = 0;
	vector<double> victor;
	while (h > 0)
	{
	cout << "type a decimal #" << endl;
		cin >> x;
		cout << "" << endl;
		victor.push_back(x);
		h--;
	}
	for (int i=0; i < 5; i++)
	{
		cout<< victor[i] << endl;
	}
	cout << "" << endl;

	cout << "vect {" << victor.size() << endl;
	sum = victor[0] + victor[1] + victor[2] + victor[3] + victor[4];
	cout << "vect sum {" << sum<< endl;
	system("PAUSE");
	return 0;
}