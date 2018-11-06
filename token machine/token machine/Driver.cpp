#include <iostream>
#include <string>

#include <TokenGiver.h>

using namespace std;

int main()
{
	TokenGiver tg;
	int choice, tokens;
	string again = "y";
	while (again == "y")
	{
		cout << "Deposit = 0, Withdraw = 1, Balance = 2: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << "How many tokens do you want to deposit? ";
			cin >> tokens;
			tg.addTokens(tokens);
			break;
		case 1:
			cout << "How many tokens do you want to Withdraw? ";
			cin >> tokens;
			tg.addTokens(tokens);
			break;
		case 2:
			cout << "You have "  << tg.count.Tokens() << " tokens" << endl;
			
			break;

			
		}
	}

	system("PAUSE");
	return 0;
}