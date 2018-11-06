#include<iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main()
{
	// C# int[] nLA = new int[5]; 
	//int point [5] = {5, 7, 9, 2, 4};

	vector<int> victor;

	int x = 1;



	for (int i=0; i < 5; i++)
	{
		//cout << point[i] << endl;
		victor.push_back(x);
		x++;
		cout<< victor[i] << endl;
	}

	//cout << victor.size() << endl;



	//point[9] = 6;

	//cout << point[9] << endl;


	system("PAUSE");
	return 0;
}