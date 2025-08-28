#include <iostream>

using namespace std; 


int main() {

	float num1, num2, res;
	cout << "Enter num1: ";
	cin >> num1;

	cout << "Enter num2: ";
	cin >> num2;

	char math;
	cout << "Enter math symbol:  ";
	cin >> math;

	/*switch (math) {
	case '+': res = num1 + num2;
	case '-': res = num1 - num2;
	case '*': res = num1 * num2;
	case '/': res = num1 / num2;
	default: res = 0 ; cout << "Error"; break;

	}*/

	if (math == '+')
		res = num1 + num2;
	else if (math == '-')
		res = num1 - num2;
	else if (math == '*')
		res = num1 * num2;
	else if (math == '/')
		res = num1 / num2;

	cout << "Result " << res << endl;

	return 0;
}

