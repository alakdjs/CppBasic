#include <iostream>

using namespace std;

// ���ӽ����̽�

namespace Samsung {
	namespace Develop1 {
		class Math {
		public:
			void Print() {
				cout << "SamSung::Print()" << endl;
			}
		};
	}
}

namespace LG {
	class Math {
	public:
		void Print() {
			cout << "LG::Print() " << endl;
		}
	};
}

int main() {
	using namespace Samsung;
	LG::Math lmath;
	Develop1::Math smath;

	lmath.Print();
	smath.Print();


	return 0;
}