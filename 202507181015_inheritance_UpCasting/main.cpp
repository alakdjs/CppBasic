#include <iostream>

using namespace std;

// UpCasting , DownCasting
// UpCasting : ��Ӱ��迡�� �θ��� DataType���� �ڽ� �޴� ��

// - UpCasting: �ڽ� �� �θ� Ÿ������ ��ȯ (�ڵ� ��ȯ ����)
// - DownCasting: �θ� �� �ڽ� Ÿ������ ��ȯ (����� ĳ���� �ʿ�, ������)

class Parent {
public:
	int _pvalue;

public:
	Parent()
		: _pvalue(0) { }

	Parent(int pvalue)
		: _pvalue(pvalue) { }

	void ShowInfo() {
		cout << "Parent::_pvalue = " << _pvalue << endl;
	}
};

class Child : public Parent {
public:
	int _cvalue;

public:
	Child()
		: Parent(0), _cvalue(0) { }

	Child(int pvalue, int cvalue)
		: Parent(pvalue), _cvalue(cvalue) { }

	void ShowInfo() {
		cout << "Child::Parent::_pvalue = " << _pvalue << endl;
		cout << "Child::_cvalue = " << _cvalue << endl;
	}
};

int main() {

	Parent parent(5);

	Child child(10, 20);

	parent.ShowInfo();

	// ��Ӱ��迡 �ִ� DataType ������
    // �ڽ� ��ü�� �θ� ��ü�� ������ �� �� �ֽ��ϴ�.
    // �ڽ��� �θ��� ������ ������ �ֱ� ������ �����մϴ�.
	parent = child;

	parent.ShowInfo();

	// �θ�ü�� �ڽİ�ü�� ������ �� �����ϴ�.
    // �θ�� �ڽ��� ������ ������ ���� �ʱ� ������ ���� ä���� ���� �����ϴ�.
	//child = parent;

	// �ڽİ�ü�� �θ�ü�� ������ �� �� �ڽ��� ������ ������ ���� �ʱ� ������
    // ���� ������ �߻��մϴ�.

    // �ڽİ�ü�� �θ�ü�� ������ �Ҷ��� 
    // ���� �������� �ʰ� ����Ÿ���̳� ������ Ÿ������ ������ �մϴ�.
    // �θ��� ����Ÿ���̳� ������ Ÿ�Կ� �ڽ��� Ÿ���� �����ϴ� ���� UpCasting
	
	cout << endl;
	cout << "UpCasting" << endl;
	cout << "����Ÿ������ ����" << endl;

	Parent& refp = child; // ����Ÿ��
	refp.ShowInfo();

	Child& refc = (Child&)refp; // DownCasting: �̷� ��쿡�� �ٿ� ĳ������ ����� �˴ϴ�.
	refc.ShowInfo();

	cout << endl;
	cout << "������ Ÿ������ ����" << endl;

	Parent* pparent = &child; // ������Ÿ�� UpCasting

	pparent->ShowInfo(); // pparent�� Parent* Ÿ���̾ ParentŸ���� ShowInfo �Լ��� ȣ��

	Child* pchild = (Child*)pparent; // DownCasting

	pchild->ShowInfo();


	return 0;
}