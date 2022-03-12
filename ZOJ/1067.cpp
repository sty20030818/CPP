#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Color
{
	public:
	int R, G, B;
	Color(int r = 0, int g = 0, int b = 0) : R(r), G(g), B(b) {}
};

int matchOne(vector<Color> &cs, Color c)
{	int index = 0;

	for(int distance = 65535, i = 0; i < cs.size(); ++i)
	{	int d = (c.R - cs[i].R) * (c.R - cs[i].R) +
				(c.G - cs[i].G) * (c.G - cs[i].G) +
				(c.B - cs[i].B) * (c.B - cs[i].B);

		if(distance > d)
		{
            distance = d, index = i;
		}
	}
	return index;
}

int main(void)
{	//ifstream cin("test.txt");
	vector<Color> c(16);

	for(int i = 0; i < 16; ++i)
		cin>>c[i].R>>c[i].G>>c[i].B;
	for(int r, g, b; cin>>r>>g>>b && r >= 0; )
	{	int i = matchOne(c, Color(r, g, b));
		cout<<"("<<r<<","<<g<<","<<b<<") maps to ("
			<<c[i].R<<","<<c[i].G<<","<<c[i].B<<")\n";
	}
	return 0;
}
