#include "MyClassB.h"
#include"MyClassA.h"


MyClassB::MyClassB()
{
}


MyClassB::~MyClassB()
{
}

int MyClassB::getA(MyClassA &ob) {
	return ob.a;
}
int MyClassB::getA(MyClassA *ob) {
	return ob->a;
}

void MyClassB::setA(MyClassA &ob, int val) {
	ob.a = val;
}