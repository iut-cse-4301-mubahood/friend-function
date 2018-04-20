#include<iostream>
#include"MyClassA.h"
using namespace std;



int getA(MyClassA ob) {
	return ob.a;
}
int main() {
	MyClassA obA1;
	MyClassA *obA2 = new MyClassA(35);
	MyClassB obB;
	int i;
	i=getA(obA1);
	cout << "a from getA(): " << i << endl;
	i=obB.getA(obA2);
	cout << "a from MyClass::getA(MyClassA *ob): " << i << endl;
	i=obB.getA(obA1);
	cout << "a from MyClass::getA(MyClassA &ob): " << i << endl;
	obB.setA(obA1, 95);
	i = obB.getA(obA1);
	cout << "a from MyClass::getA(MyClassA &ob) after changing value: " << i << endl;

	getchar();
	return 0;
}