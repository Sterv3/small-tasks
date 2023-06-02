#include "List.h"
#include <iostream>


int main(){
	using std::cout;
	using std::endl;
	Complex a(3.0, 4.0);
	Complex c;
	cout << "Enter c complex number(q to quit):\n";
	while (std::cin >> c) {
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << ~c << '\n';
		cout << "a is " << a<<'\n';
		cout << "a + c is " << a + c << '\n';
		cout << "a - c is " << a - c << '\n';
		cout << "a * c is " << a * c << '\n';
		cout << "2 * c is " << 2 * c << '\n';
		cout << "Enter c complex number(q to quit):\n";
	}
	cout << "Done!\n";
	return 0;
}