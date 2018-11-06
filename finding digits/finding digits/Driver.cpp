
#include <iostream>
#include <string>
using namespace std;

int hi(string area, char c)
{
	if (area == "")
		return 0;
	else
	{
		if (area[0] == c)
		{
			area = area.substr(1);
			return 1 + hi(area, c);
		}
		else 
		{
			area = area.substr(1);
			return 0 + hi(area, c);
		}
		
		
	}
}
int main()
{
	int count = 0;
	char c = 'a';
	string area;
	cout << "type a string" << endl;
	cin >> area;
	
	count = hi(area, c);
	cout << count << " -- a's in -- " << area << endl;
	system("PAUSE");
	return 0;
}
