#include<iostream>
using namespace std;

class Shape {
protected:
    string color;
    int area;

public:
    virtual void display() = 0; 
};

class Circle : public Shape {
private:
    int r;

public:
    void display() override {
        cout << "Enter a color for the circle: ";
        cin >> color;
        cout << "Color of the circle: " << color << endl;
    }

    void cal() {
        cout << "Enter the radius: ";
        cin >> r;
        area = 3.14 * r * r;
        cout << "Area of the circle: " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    int l, w;

public:
    void display() override {
        cout << "Enter a color for the rectangle: ";
        cin >> color;
        cout << "Color of the rectangle: " << color << endl;
    }

    void cals() {
        cout << "Enter the length: ";
        cin >> l;
        cout << "Enter the width: ";
        cin >> w;
        area = l * w;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main() {
    Shape *s[10];
    Circle c;
    Rectangle r;


    s[0] = &c;
    s[1] = &r;


    s[0]->display();
    Circle*>(s[0])->cal();

    
    s[1]->display();
    Rectangle*>(s[1])->cals();

    return 0;
}

