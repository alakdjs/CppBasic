#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
	int _x, _y;

public:
	Point(int x, int y)
		: _x(x), _y(y) { }

	int GetX() {
		return _x;
	}

	int GetY() {
		return _y;
	}
};

class Line {
private:
	Point _pt1, _pt2;  //Composition

public:
	Line(int pt1x, int pt1y, int pt2x, int pt2y)
		: _pt1(pt1x, pt1y), _pt2(pt2x, pt2y) { }

	Line(Point pt1, Point pt2)
		: _pt1(pt1), _pt2(pt2) { }

	float GetLength() {
		int xBase = _pt2.GetX() - _pt1.GetX();
		int height = _pt1.GetY() - _pt2.GetY();

		return sqrt(pow(xBase, 2) + pow(height, 2));
	}
};

// �ﰢ�� Ŭ���� (���� �ﰢ��)
// �簢�� Ŭ���� (���� �簢��)
// �� Ŭ����

// ������ ����Ŭ������ ����� ������ ����ؼ� ����غ�����..

class Triangle {
private:
	Point _p1, _p2, _p3;

public:
	Triangle(Point p1, Point p2, Point p3)
		: _p1(p1), _p2(p2), _p3(p3) { }

	float GetAreaT() {
		Line base(_p1, _p2);
		Line height(_p1, _p3);

		return (base.GetLength() * height.GetLength()) / 2;
	}
};

class Rectangle {
private:
	Point _pr1, _pr2, _pr3;

public:
	Rectangle(Point pr1, Point pr2, Point pr3)
		: _pr1(pr1), _pr2(pr2), _pr3(pr3) { }

	float GetAreaR() {
		Line width(_pr1, _pr2);
		Line height(_pr1, _pr3);
		
		return width.GetLength() * height.GetLength();
	}

};

class Cycle {
private:
	Point _center, _cline;

public:
	Cycle(int cx, int cy, int lx, int ly)
		: _center(cx, cy), _cline(lx, ly) { }

	float GetR() {
		Line r(_center, _cline);

		return r.GetLength();
	}

	float GetAreaC() {
		float r = GetR();
		return 3.141592 * r * r;
	}

};

int main() {
	// ��Ÿ��� ���� ����
	Line line(0, 0, 4, 4);
	cout << "line length = " << line.GetLength() << endl;

	
	// �ﰢ�� ����
	Point p1(0, 0);
	Point p2(4, 0);
	Point p3(0, 5);
	Triangle triangle(p1, p2, p3);
	cout << "�ﰢ�� ���� tiranle area = " << triangle.GetAreaT() << endl;


	// �簢�� ����
	Point pr1(0, 5);
	Point pr2(3, 8);
	Point pr3(2, 2);

	Rectangle rect(pr1, pr2, pr3);

	cout << "�簢�� ���� rectangle area = " << rect.GetAreaR() << endl;


	// �� ����
	Cycle c(0, 0, 0, 3);
	cout << "������ r = " << c.GetR() << endl;
	cout << "�� ���� Cycle area = " << c.GetAreaC() << endl;


	return 0;
}
