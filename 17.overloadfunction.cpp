#include <iostream>
#include <cmath>

using namespace std;
double calculateArea(double side) {
    return side * side;
}
double calculateArea(double length, double width) {
    return length * width;
}
double calculateArea(double radius, bool isCircle) {
    return M_PI * radius * radius;
}
int main() {
    double side, length, width, radius;
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of square: " << endl;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: "<< endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: "  << endl;
    return 0;
}

