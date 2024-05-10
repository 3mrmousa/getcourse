#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() { return 0; }
    virtual double calculatePerimeter() { return 0; }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        double area = length * width;
        cout << "Rectangle area: " << area << endl;
        return area;
    }
    double calculatePerimeter() override {
        double perimeter = 2 * (length + width);
        cout << "Rectangle perimeter: " << perimeter << endl;
        return perimeter;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double calculateArea() override {
        double area = side * side;
        cout << "Square area: " << area << endl;
        return area;
    }
    double calculatePerimeter() override {
        double perimeter = 4 * side;
        cout << "Square perimeter: " << perimeter << endl;
        return perimeter;
    }
};

int main() {
    Rectangle r(5, 5);
    Square s(4);

    Shape* shape_ptr;

    shape_ptr = &r;
    shape_ptr->calculateArea();
    shape_ptr->calculatePerimeter();

    shape_ptr = &s;
    shape_ptr->calculateArea();
    shape_ptr->calculatePerimeter();

    return 0;
}
