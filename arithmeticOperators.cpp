#include <iostream>

int main(){
    int students = 20;

    //All about +
    students = students + 5;
    std::cout << students << '\n';
    students += 1;
    std::cout << students << '\n';
    students++;
    std::cout << students << '\n';

    //all about -
    students = students - 1;
    std::cout << students << '\n';
    students -= 1;
    std::cout << students << '\n';
    students--;
    std::cout << students << '\n';

    //all about *
    students = students * 2;
    std::cout << students << '\n';
    students *= 2;
    std::cout << students << '\n';

    //all about division
    students = students / 2;
    std::cout << students << '\n';
    students /= 2;
    std::cout << students << '\n';

    //all about remainder
    int remainder;
    remainder = students % 5;
    std::cout << remainder << '\n';

    return 0;
}