#include "Vector2.h"

using namespace std;

int main()
{
	Vector2 earth(6, 4);

	Vector2 jupiter;
	jupiter.x = 9;
	jupiter.y = 7;

	double x = jupiter.x - earth.y;
	double y = jupiter.y - earth.x;

	Vector2 distance(jupiter.x - earth.x, jupiter.y - earth.y);

	Vector2 dist2 = jupiter.minus(earth);
	cout << dist2.x << endl;
	cout << dist2.y << endl;

	earth.x = 8;
	earth.y = 14;

	Vector2 dist3 = jupiter - earth;
	cout << dist3.x << endl;
	cout << dist3.y << endl;


	system("PAUSE");
	return 0;
}