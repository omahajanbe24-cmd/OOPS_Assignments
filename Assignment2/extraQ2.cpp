#include <iostream>
using namespace std;
class Rectangle{
    private:
    double width;
    double length;

    public:
    Rectangle(){
        
    }
    void setDimensions(double, double);
    double calculateArea(const Rectangle& );
    void displayDimensions();
};

void Rectangle::setDimensions(double a, double b){
    length = a;
    width = b;
}

void Rectangle::displayDimensions(){
    cout << "Length : " << length << " Width : " << width << endl;
}

double Rectangle::calculateArea(const Rectangle& rect){
    return length * width;
}

int main(){
    Rectangle R;

    R.setDimensions(100,9.4);
    R.displayDimensions();
    double area = R.calculateArea(R);
    cout << "Area : " << area << endl;
    return 0;
}