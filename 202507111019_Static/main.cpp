#include <iostream>

using namespace std;

int GetScore(int value) { // �Ϲ��Լ�
    static int sum = 0;   // ��������

    sum += value;

    return sum;
}


int main() {

    for (int i = 0; i < 10; i++) {
        GetScore(i);
    }

    int ret = GetScore(0);

    cout << "ret = " << ret << endl;


    return 0;
}