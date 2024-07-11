#include <iostream>
using namespace std;

class Shape {
protected:
    int width;
    int height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    void displayDimensions() {
        cout << "Width: " << width << " Height: " << height << endl;
    }
};

class Rectangle: public Shape {
public:
    int calculateArea() {
        return width * height;
    }
};
int main() {
    Rectangle rectangle;
    rectangle.setDimensions(3, 4); // Setting width and height for Rectangle
    rectangle.displayDimensions(); // Output: Width: 3 Height: 4
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl; // Output: Area of Rectangle: 12
    return 0;
}
