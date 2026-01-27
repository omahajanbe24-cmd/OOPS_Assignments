#include <iostream>
using namespace std;

class Item{
private:
    int val;
public:
    static int counter;
    static void getCount();
    void getData(int);
};

void Item::getData(int a){
    val = a;
    counter++;
}

void Item::getCount(){
    cout << "Number of objects created : " << counter << endl;
}
int Item::counter = 0;

int main(){
    Item a, b, c;
    a.getData(10);
    Item::getCount();
    b.getData(10);
    Item::getCount();
    c.getData(10);
    Item::getCount();
}