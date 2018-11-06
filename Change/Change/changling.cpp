#include <string>
#include <iostream>
#include <iomanip>


//ComputeChange(&);   		  
void quater (int& cents, int& q, int dim, int nick, int pen);
using namespace std;

int main()
{
//const int HALF = 50, QUART = 25, DIME = 10, NICK = 5, PEN = 1;
int money, cents, cons;
//cons = money;
//cents = money;

cout << "I will make change for you." << endl;
cout <<"Enter in an amount between 1 and 99: " << endl;
cin >> cents;
			//money = money % 25;
			//qua = cents / 25;
            //cents = cents % 25;
            //dim = cents / 10;
            //cents = cents % 10;
            //nick = cents / 5;
            //cents = cents % 5;
            //pen = cents / 1;
            //cents = cents % 1;

// FIX THIS PART
//cout << "For {" << cons <<"} you get:"<< endl;
cout << quater;

	system("PAUSE");
    return 0;
}			    		// Body of the Method here
      void quater (int& cents, int& q, int dim, int nick, int pen)

	{
			q = cents / 25;
            cents = cents % 25;
            dim = cents / 10;
            cents = cents % 10;
            nick = cents / 5;
            cents = cents % 5;
            pen = cents / 1;
            cents = cents % 1;
		cout <<"{" << q <<"} quarters" << endl;
		cout <<"{"<< dim <<"} dimes" << endl;
		cout <<"{"<< nick <<"} nickels"  << endl;
		cout <<"{"<< pen <<"} pennies" << endl;
	}
	