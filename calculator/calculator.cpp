#include<iostream>
using namespace std;


void calculator() {
	
	cout << "1. Addition" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multliplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exit" << endl;
}


int addition(int x, int y) {
	cout <<"The sum of these two numbers are"<<endl<< x + y<<endl;
	return 0;
}
int substraction(int x, int y) {
	cout << "The subtraction of these two numbers are"<<endl << x - y<<endl;
	return 0;
}
int multliplication(int x, int y) {
	cout << "The product of these two numbers are"<<endl << x * y<<endl;
	return 0;
}
int division(int x, int y) {
	cout << "The division of these two numbers are"<<endl << x / y<<endl;
	return 0;
}
int main()
{
	int choice;
	do {
		calculator();
		cout << "Enter the choice you want to do" << endl;
		cin >> choice;

		system("cls");
		switch (choice) {
			int a, b;
		case 1:
			cout << "Enter two numbers" << endl;
			cin >> a >> b;
			addition(a, b);
			break;

		case 2:

			cout << "Enter two numbers" << endl;
			cin >> a >> b;
			substraction(a, b);
			break;
		case 3:
			cout << "Enter two numbers" << endl;
			cin >> a >> b;
			multliplication(a, b);
			break;
		case 4:
			cout << "Enter two numbers" << endl;
			cin >> a >> b;
			if (b == 0) {
				cout << "you are trying to divide by zero" << endl;
			}
			else
				division(a, b);
			break;
		}
	} while (choice != 5);
}