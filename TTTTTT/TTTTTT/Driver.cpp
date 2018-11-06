#include<iostream>
#include<string>
#include<queue>
#include<stack>
using namespace std;
int main()
{
	queue<int> cute;
	stack<int> cups;
	cute.push(666);
	cute.push(6);
	cout << cute.front() << endl;
	cute.pop();
	cout << cute.front() << endl;
	system("PAUSE");
	return 0;
}