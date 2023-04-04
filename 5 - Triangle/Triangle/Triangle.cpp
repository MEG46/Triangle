#include "Header2.h"
int main()
{
	float a, b, c;
	cout << "Please enter the sides:" << endl;
	cout << "Side A : ";
	cin >> a ;
	cout << "Side B : ";
	cin >> b;
	cout << "Side C : ";
	cin >> c;
	Triangle triangle1(a, b, c);
	Triangle triangle2= triangle1;
	Triangle triangle3 = triangle2;
	cout << "-Triangle-" << endl;
	cout << "Side A:" << triangle1.getSideA() << endl;
	cout << "Side B:" << triangle1.getSideB() << endl;
	cout << "Side C:" << triangle1.getSideC() << endl;
	triangle1.triangleType();
	cout << " Area : " << triangle1.calculateArea() << endl;
	
}
