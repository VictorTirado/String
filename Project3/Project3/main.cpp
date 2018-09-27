#include <iostream>
#include "String.h"

using namespace std;

int main() {
	String a;
	String b("hello");
	String c(b);
	a = b;
	cout << a.info << endl;
	cout << c.info << endl;
	a = "bye";

	if(a.info == "bye")
	cout << a.info << endl;
	system("pause");
}