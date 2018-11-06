#include <string>

using namespace std;

class TokenGiver
{
private:
	int numTokens;

public:
	void giveTokens(int);
	void addTokens(int);
	int countTokens();
}