#include <string>
using namespace std;

class Coffin
{
private:
	int width;
	int length;
	int depth;

public:
	Coffin();
	void setWidth(int w);
	void setLength(int l);
	void setDepth(int d);
	int getWidth() const;
	int getLength() const;
	int getDepth() const;

	int coffinVol();
};