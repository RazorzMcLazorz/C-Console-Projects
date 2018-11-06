#include<iostream>
#include<string>
#include<queue>
#include<stack>
using namespace std;
int main () {

std::queue<std::string> myqueue;

cout << "type ina sentence" << endl;

cin >> myqueue.push(myqueue[' ']);

myqueue.emplace (", ");

myqueue.emplace ("!");


std::cout << "myqueue contains:\n";

while (!myqueue.empty()) {

std::cout << myqueue.front() << '\n';

myqueue.pop();

}

system("PAUSE");
return 0;

}




