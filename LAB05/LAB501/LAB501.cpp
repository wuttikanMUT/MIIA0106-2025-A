#include <iostream>
#include <string>
using namespace std;

double circleArea(double r)
{
	return 3.14 * r * r;
}
double rectangleArea(double w, double h)
{
	return w * h;
}
int main()
{
	float r;
	float w, h;
	cout << "Calculate Area = " << circleArea(05) << endl;
	cin >> r;
	cout << "Rectangle Area = " << rectangleArea(10, 5) << endl;
	cin >> w >> h;
	cout << "Circle Area = " << circleArea(r) << endl;
	cout << "Rectangle Area = " << rectangleArea(w, h) << endl;
	
	return 0;
}
