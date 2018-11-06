#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

void Display(int n, int s)
{
	cout << "" << n << endl << "" << s << endl;
}

// Function prototype
int Sum ( int d1, int d2);

void Split ( const int& inte, int& o, int& t);

// FUnction fail code
template<typename T>
void Enter(T& data, string what)
{
	cout << "Please enter something" << endl;
	cin >> data;
	while(cin.fail())
	{
		cin.clear(); 
		string garbage;cin >> garbage;
		cout << "Please enter something" << endl;
		cin >> data;
	}
}






int main()
{
	int dig, o, t, th, y, u, inte, sum, Sum;
	bool good = false;
	
	Enter(inte);

	good = true;
	if (inte > 99)
	{
		good = false;
	}
	if (cin.fail())
	{
		good = false;
		
	}
	

            

            o = inte / 10;
			t = inte % 10;

			th = o + t;
            

			Split(inte, o, t);
            //cout << o << endl;
           // cout << t << endl;
            //cout << th << endl;
			//Sum = Sum(o, t);
			Display(o, t);

			


	system("PAUSE");
   return 0;
}
	int Sum(int d1, int d2)
		{
			return  d1 + d2;
		}

	void Split(const int& inte, int& o, int& t)
	{
		o = inte / 10;
		t = inte % 10;
	}