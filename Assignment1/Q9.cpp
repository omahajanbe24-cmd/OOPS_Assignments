#include <iostream>
using namespace std;

int main(){
	int digit1, digit2;
	char operatorSymbol;
	
	cout << "Enter the two digits with the operator: " << endl;
	cin >> digit1 >> operatorSymbol >> digit2;
	
	switch (operatorSymbol){
		case '+':
			cout << "The sum is " << digit1 + digit2 << endl;
			break;
		case '-':
			cout << "The difference is " << digit1 - digit2 << endl;
			break;	
		case '*':
			cout << "The product is " << digit1 * digit2 << endl;
			break;
		case '/':
			if(digit2 == 0){
				cout << "Divisor cannot be zero!" << endl;
				return -1;
			}else{
				cout << "The quotient is is " << digit1/digit2 << endl;
				break;
			}
		default : 
			cout << "Operator not defined!" << endl;
			return -1;
	}
	return 0;
}
