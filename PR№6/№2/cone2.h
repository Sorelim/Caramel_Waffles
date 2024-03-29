#include <cmath>
#include <iostream>
using namespace std;
class cone
{
private:
	const double pi = 3.1416;
	double x, y, z;
	double R;
	double H;
public:
	cone()
	{
		x = 0;
		y = 0;
		z = 0;
		R = 0;
		H = 0;
	}
	cone(double r, double h)
	{
		x = 0;
		y = 0;
		z = 0;
		R = r;
		H = h;
	}
	cone(double X, double Y, double Z, double r, double h)
	{
		x = X;
		y = Y;
		z = Z;
		R = r;
		H = h;
	}
	void setCoordinate(double X, double Y, double Z);
	void setRadius(double r);
	void setHeight(double h);
	void getCoordinate(double& X, double& Y, double& Z);
	double getRadius();
	double getHeight();
	double area();
	double volume();

	friend ostream& operator<<(ostream& stream, cone obj);
};

