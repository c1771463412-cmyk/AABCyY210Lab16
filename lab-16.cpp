// COMSC-210-5293 | Lab 16 | Yuyi Chen

#include <iostream>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;

    public:
        // Default constructor
        Color() {
            red = 0;
            green = 0;
            blue = 0;
        }

        // Partial constructor
        Color(int r) {
            red = r;
            green = 0;
            blue = 0;
        }

        // Parameter constructor
        Color(int r, int g, int b) {
            red = r;
            green = g;
            blue = b;
        }

        // getRed() gets the red value
        // arguments: none
        // returns: the red value
        int getRed() const {
            return red;
        }

        // setRed() sets the red value
        // arguments: an integer for the red value
        // returns: nothing
        void setRed(int r) {
            red = r;
        }

        // getGreen() gets the green value
        // arguments: none
        // returns: the green value
        int getGreen() const {
            return green;
        }

        // setGreen() sets the green value
        // arguments: an integer for the green value
        // returns: nothing
        void setGreen(int g) {
            green = g;
        }

        // getBlue() gets the blue value
        // arguments: none
        // returns: the blue value
        int getBlue() const {
            return blue;
        }

        // setBlue() sets the blue value
        // arguments: an integer for the blue value
        // returns: nothing
        void setBlue(int b) {
            blue = b;
        }

        // print() displays the RGB values
        // arguments: none
        // returns: nothing
        void print() const {
            cout << "Red: " << red
                 << ", Green: " << green
                 << ", Blue: " << blue << endl;
        }
};

int main() {
    // Create Color objects using different constructors
    Color color1;
    Color color2(255);
    Color color3(0, 0, 255);

    // Display each Color object's data
    color1.print();
    color2.print();
    color3.print();

    return 0;
}