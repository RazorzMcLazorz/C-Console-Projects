#include<iostream>
#include<vector>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	//SHORT tabKeyState = GetAsyncKeyState( VK_TAB );
	int midf , mids, fin, Se, in;
	double x, sum = 0, s = 0;
	vector<double> victor;

	cout << "enter score of first midterm percent" << endl;
	cin >> midf;
	cout << "enter score of second midterm percent" << endl;
	cin >> mids;
	cout << "enter score of final exam  percent" << endl;
	cin >> fin;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	cout << "How many Assignment's do you need to do?" << endl;
	cin >> s;
	while (s >= 1)
	{
		cout << "type score of the assignments percentage" << endl;
		cin >> x;
		cout << "" << endl;
		victor.push_back(x);
		s--;
	}
	
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	Se = victor.size();
	in = victor.size();
	while (Se > 0)
	{
		sum += victor[Se-1];
		Se--;
	}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++
	in = in + 3;
	sum = sum + midf + mids + fin;
	sum = sum / in;
	cout << sum << endl;
	
	system("PAUSE");
	return 0;
}
