#include "TokenGiver.h"

void TokenGiver::addTokens(int t)
{
	numTokens += t;
}
void TokenGiver::giveTokens(int t)
{
	numTokens += t;
}
int TokenGiver::countTokens()
{
	return numTokens;
}