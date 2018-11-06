#include <iostream>
using namespace std;

// Step 1: Prompt user to enter dollar value
// Step 2: Assign dollar value variables
// Step 3: Return change in full dollars
// Step 4: Return change in half dollars
// Step 5: Return change in quarters
// Step 6: Return change in dimes
// Step 7: Return change in nickels
// Step 8: Return change in cents

// End of Algorithm

int main ()
{
    int change;
    cout << "How much change would you back?  "  "Enter dollar value:  ";
    cin  >>  change;
    
    
    int dollar = change / 1;
    int halfdollar = dollar / .50;
    int quarters  =  halfdollar / .25;
    int dimes = quarters / .10;
    int nickels = dimes / .05;
    int cents = nickels / .01;
    

    
    //Step 2:  Return change in full dollars
    
    cout  <<  "The # of dollars=  "  <<  dollar  << endl;
    
    //Step 3: Return change in half dollars
    
    cout  <<  "The # of half dollars=  "  <<  halfdollar  << endl;
    
    //Step 4:  Return change in quarters
    
    cout  <<  "The # of quarters=  "  <<  quarters  <<  endl;
    
    //Step 5:  Return change in dimes
    
    cout  <<  "The # of dimes=  "  <<  dimes  <<  endl;
    
    //Step 6:  Return change in nickels
    
    cout  <<  "The # of nickels=  "  << nickels  <<  endl;
    
    //Step 7:  Return change in cents
    
    cout  <<  "The # of cents=  "  <<  cents  <<  endl;
    
    
    
    system("pause");
    return 0;
    
}