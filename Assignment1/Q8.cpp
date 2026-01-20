#include <iostream>
using namespace std;

int main(){
	int days;
	
	cout << "Enter the number of days when the book is submitted : " << endl;
	cin >> days;
	
	if(days < 0){
		cout << "Negative input is not allowed" << endl;
		return -1; 
	}
	if(days <= 5){
		cout << "The fine is 50 paise" << endl;
	}else if(days <= 10){
		cout << "The fine is 1 rupee" << endl;
	}else if(days <= 30){
		cout << "The fine is 5 rupees" << endl;
	}else{
		cout << "Your membership is cancelled due to late submission!" << endl;
	}
	return 0;
}
