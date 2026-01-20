#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string s = "hello!";
    cout << "\t" << s << "\n" << setw(20) << "second line " << "b\ba" << endl;
    return 0;
}