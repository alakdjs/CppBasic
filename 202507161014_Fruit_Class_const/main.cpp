#include <iostream>
#include <string>

using namespace std;

class Fruit {
private:
    string _name;   // ���ϸ�
    float _weight;   // ����
    float _brixDegree;   // �絵

public:
    Fruit(string name, float weight, float brixDegree)
        : _name(name), _weight(weight), _brixDegree(brixDegree) {
    }

    string GetName() const { // const �Լ�
        // const �Լ��� ��������� ���� �������� �ʴ� �Լ�
        //_name = "monster";
        return _name;
    }

    void SetName(string value) {
        _name = value;
    }

    float GetBrixDegree() const {
        return _brixDegree;
    }

    float GetWeight() const {
        return _weight;
    }

    void ShowInfo() const {
        cout << "���ϸ�: " << _name << endl;
        cout << "����: " << _weight << "g" << endl;
        cout << "�絵: " << _brixDegree << "%" << endl;
        cout << endl;
    }
};

// ��ü�� �������� const�� �����ϰ� �Ǹ�
// ���޹��� �Լ����� ��ü�� ���� ������ �� �����ϴ�.
// ��ü�� const�� �����ϸ� ���������� const ����Լ��� ȣ�� �� �� �ֽ��ϴ�.

void PrintFruit(const Fruit& ref) {
    //ref.SetName("ȣ��");
    cout << "���ϸ�: " << ref.GetName() << endl;
    cout << "����: " << ref.GetWeight() << "g" << endl;
    cout << "�絵: " << ref.GetBrixDegree() << "%" << endl;
    cout << endl;
}


int main() {
    Fruit fruitArray[3] = {
       {"�ٳ���" , 0.3f, 80.0f},
       {"���", 0.8f, 83.0f},
       {"����", 0.2f, 78.0f}
    };

    int length = sizeof(fruitArray) / sizeof(Fruit);

    for (int i = 0; i < length; i++) {
        PrintFruit(fruitArray[i]);
    }

    return 0;
}