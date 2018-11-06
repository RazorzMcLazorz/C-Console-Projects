#include <iostream>
#include <string>
using namespace std;

void Sum(string area)
{
	int length = area.length();
	if(length <= 1)
		cout << "is a Palindrome" << endl;
	else if(area.at(0) == area.at(length -1)) 
	{
	    area = area.substr(1, (length - 2));
	    Sum(area);
	}
	else cout << "Not a palindrome." << endl;
	{
	    cin >> area;
	}
}
int main()
{
	
	string area;
	
	cout << "Please enter a word." << endl;
	cin >> area;
	cout << area << endl;
	Sum(area);
	


	system("PAUSE");
	return 0;
}
