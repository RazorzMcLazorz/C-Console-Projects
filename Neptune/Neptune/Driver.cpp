#include "Vector2.h"

using namespace std;

int main()
{
	Vector2 neptune1(2, 7);
	Vector2 neptune2(8, 7);
	Vector2 neptune3(5, 1);

	Vector2 centroid = (neptune1 +neptune2 + neptune3) / 3;

	centroid = centroid / 3.0;

	cout << centroid.x << endl;
	cout << centroid.y << endl;

	system("PAUSE");
	return 0;
}