#include <iostream>
#include <string>
using namespace std;
int Sum(int area){
    if (area == 0){
		return 0;}
	else {
		area = area / 4;
		return 1 + Sum(area);}}
int main(){
	cout << "type a NUMBER" << endl;
	int area = 0, slices = 0;
	cin >> area;
	slices = Sum(area);
	cout << "the triangle split " << slices << " times" << endl;
	system("PAUSE");
	return 0;}