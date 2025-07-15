#pragma once
#include <string>
#include <iostream>

class Building {
private:
    std::string _name;
    float _area;
    int _maxFloor;

public:
    Building(std::string name, float area, int maxFloor);
    std::string GetName();

    float GetArea();

    int GetMaxFloor();

    void CheckFloor(int floor);

    inline void CheckAllFloor(); // inline 키워드가 있으면 컴파일러는 이 함수를 inline 함수로 만들어 달라는 요청으로 받아드립니다.
};

void Building::CheckAllFloor() {
    std::cout << std::endl;
    std::cout << "빌딩의 모든 시스템을 체크합니다." << std::endl;

    for (int i = 0; i < _maxFloor; i++) {
        CheckFloor(i);
    }
}