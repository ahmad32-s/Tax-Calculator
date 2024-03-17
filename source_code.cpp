#include <iostream>
#include<string>
using namespace std;
int main()
{                    
	//PROGRAM FOR TAX CALCULATION:

int salary, tax;
char repeat;
cout << "Program To Find The Tax On Salary Accordibg to FBR" << endl;
cout << "-------------------------------------------------" << endl << endl;
do{
	cout << "Please Enter The Salary: ";
	cin >> salary;
	if (salary <= 400000){
		tax = 0;
	}
	else if (salary>400000 && salary <= 500000){
		tax = (salary - 400000)*0.02;
	}
	else if (salary>500000 && salary <= 750000){
		tax = ((salary - 500000)*0.05) + 2000;
	}
	else if (salary>750000 && salary <= 1400000){
		tax = ((salary - 750000)*0.1) + 14500;
	}
	else if (salary>1400000){
		tax = ((salary - 1400000)*0.2) + 17500;
	}
	else{
		tax = 9999;
	}
	cout << "The Tax On Rs." << salary << " Salary is: Rs." << tax << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Thank You!" << endl << endl;
	cout << "Do You Want To Repeat? (y/n) ";
	cin >> repeat;
	cout << endl;
} while (repeat == 'y' || repeat == 'Y');


	return 0;
}
