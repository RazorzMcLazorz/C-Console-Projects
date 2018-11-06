#include <iostream>
#include <string>
#include <windows.h>

using namespace std;  

int main()
{
	hi:
    int i,space,rows,k=0;
	cout << "Type 123, 20 is max with out build the triangle" << endl;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
           cout<<"  ";
        }
        while(k!=2*i-1)
        {
           cout<<"* ";
           ++k;
        }
        k=0;
        cout<<"\n";
    }
	goto hi;
	system("PAUSE");
    return 0;
}



