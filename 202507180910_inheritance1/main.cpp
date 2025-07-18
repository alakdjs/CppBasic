#include <iostream>
#include <string>

// ����� Ȯ������ �� ���
class ExtString : public std::string {
public:
	ExtString() {}
	ExtString(char* pStr)
		: std::string(pStr) {}

	ExtString(std::string str)
		: std::string(str) {}

	int GetLength() {
		const char* ptr = c_str(); // ���ڿ��� ����� �޸� �ּҰ��� �����ϴ�
                           // string Ŭ������ ����Լ�

		int count = 0;
		for (count = 0; ptr[count] != 0; count++);

		return count;
	}
};

int main() {
	using namespace std;

	ExtString str((char*)"monster");

	cout << "str ���ڿ� ����: " << str.GetLength() << endl;

	cout << str << endl;

	string str2 = "I am a boy!!";
	ExtString extStr(str2);

	cout << "extStr ���ڿ�����: " << extStr.GetLength() << endl;
	cout << extStr << endl;

	ExtString str3 = str + extStr;

	cout << "str3 ���ڿ� ����: " << str3.GetLength() << endl;
	cout << str3 << endl;

}