#include <iostream>

#include <windows.h>
///#include "ConsoleColor.h"

using namespace std;  

	
int main () {
	
//cout << green << "This text is written in green" 
      //   << white << endl;
//cout << color(FOREGROUND_RED|FOREGROUND_GREEN) 
   //       << "This text has a really exiting color !" 
   //       << white << endl;



	int rose = 0;
	cout << "How many roses do you want" << endl;
	cin >> rose;
   // for loop execution
   while (rose > 0)
   {
	   cout << "@)-,-'--" << endl;
	   rose--;
   }
 
   system("PAUSE");
   return 0;
}



