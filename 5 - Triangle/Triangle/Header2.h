#include <iostream>
#include <string>
using namespace std;

class Triangle {
public:
    Triangle(float a, float b, float c);
    ~Triangle();
    Triangle(const Triangle& oth);
    bool isTriangle(float a, float b, float c);
    float getSideA() const {
        return SideA;
    }
    float getSideB() const {
        return SideB;
    }
    float getSideC() const {
        return SideC;
    }
    void setValue(float a, float b, float c);
    bool isEquilateral();
    bool isScalene();
    bool isIsosceles();
    void triangleType();
    float calculateArea();
private:
    float SideA, SideB, SideC;
   
};
void Triangle::setValue(float a, float b, float c) {
    while (!isTriangle(a, b, c)) {
        cout << "Please enter the sides (A-B-C) : " << endl;
        cin >> a >> b >> c;
    }
        SideA = a;
        SideB = b;
        SideC = c;
        cout << "Triangle created!" << endl;
    
}
Triangle::Triangle(float a, float b, float c) {
    while (!isTriangle(a, b, c)) {
        cout << "Please enter the sides (A-B-C) : " << endl;
        cin >> a >> b >> c;
    }
    SideA = a;
    SideB = b;
    SideC = c;
    cout << "Triangle created!" << endl;

}
Triangle::~Triangle() {
    cout << "Triangle Destroyed!" << endl;
}
Triangle::Triangle(const Triangle& oth) {
    SideA = oth.SideA;
    SideB = oth.SideB;
    SideC = oth.SideC;
    cout << "Triangle copied to target" << endl;
}
bool Triangle::isTriangle(float a, float b, float c) {
    if (!((abs(b - c) < a && (a < b + c)))) {
        cout << "Invalid A" << endl;
        return false;
     }
    if (!((abs(a - c) < b && (b < a + c)))) {
        cout << "Invalid B" << endl;
        return false;
    }
    if (!((abs(a - b) < a && (c < a + b)))) {
        cout << "Invalid C" << endl;
        return false;
    }
    return true;
}
bool Triangle::isEquilateral() {
    return (SideA == SideB && SideB == SideC);
}
bool Triangle::isIsosceles() {
    if (isEquilateral()) {
        return true;
    }
    else {
        return (SideA == SideB || SideB == SideC || SideA == SideC);
      
    }
}
bool Triangle::isScalene() {
    return !isEquilateral();
}
void Triangle::triangleType() {
    if (isEquilateral()) {
        cout << "Equilateral Triangle" << endl;
    }else if (isIsosceles()) {
        cout << "Isosceles Triangle" << endl;
    }
    else {
        cout << "Scalene Triangle" << endl;
    }
}
float Triangle::calculateArea() {
    float area;
    float s = (SideA + SideB + SideC) / 2;
    area = sqrt(s * (s - SideA) * (s - SideB) * (s - SideC));
    return area;
}