#include <iostream>

using namespace std;

class Parent {
public:
	void Print() { // 일반멤버함수
		cout << "Parent::Print()" << endl;
	}

	virtual void VPrint1() { // 가상함수
		cout << "Parent::VPrint1()" << endl;
	}

	virtual void VPrint2() { // 가상함수
		cout << "Parent::VPrint2()" << endl;
	}
	
	virtual void VPrint3() { // 가상함수
		cout << "Parent::VPrint3()" << endl;
	}
};

class Child1 : public Parent {
public:
	void Print() {
		cout << "Child1::Print()" << endl;
	}

	void VPrint1() override {
		cout << "Child1::VPrint1()" << endl;
	}
};

class Child2 : public Parent {
public:
	void Print() {
		cout << "Child2::Print()" << endl;
	}

	void VPrint2() override {
		cout << "Child2::VPrint2()" << endl;
	}
};

class Child3 : public Parent {
public:
	void VPrint3() override {
		cout << "Child3::VPrint3()" << endl;
	}
};

// 일반멤버함수 호출
void FuncPrint(Parent& ref) {
	ref.Print();
}

void FuncPrint(Child1& ref) {
	ref.Print();
}

void FuncPrint(Child3& ref) {
	ref.Print();
}

// 가상함수 호출
void FuncVPrint1(Parent& ref) {
	ref.VPrint1();
}

void FuncVPrint2(Parent& ref) {
	ref.VPrint2();
}


int main() {
	Parent parent;
	Child1 child1;
	Child2 child2;
	Child3 child3;

	// 일반멤버함수 호출
	cout << "일반멤버함수 Call FuncPrint" << endl;
	FuncPrint(parent);
	FuncPrint(child1);
	FuncPrint(child2);
	FuncPrint(child3);
	cout << endl;
	cout << endl;

	// 가상멤버함수 호출
	cout << "가상멤버함수 Call FuncVPrint2" << endl;
	FuncVPrint2(parent);
	FuncVPrint2(child1);
	FuncVPrint2(child2);
	FuncVPrint2(child3);

	return 0;
}