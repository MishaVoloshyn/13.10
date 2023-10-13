#include <iostream>
#include "MyLybrary.h"
using namespace std;

class Plane : public Fly1 {
public:
	virtual void Fly() {
		cout << "Plane can fly " << endl;
	}
};

void MyFuncSwim(Swim* ptr)
{
	ptr->Swimm();
}
void MyFuncFly(Fly1* ptr)
{
	ptr->Flyy();
}

int main() {
	Parrot obj("King parrot", 1, "Afrika");
	MyFuncFly(&obj);

	Plane obj2;
	MyFuncFly(&obj2);
}