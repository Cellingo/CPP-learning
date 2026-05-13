#include <iostream>

int main(){

    int x = 3.14;
    std::cout << x << '\n';
    double y = 3.14;
    std::cout << y << '\n';
    double c = (int) 3.14;
    std::cout << c << '\n'; //output is 3
    char d = 100; //cast number to ASCII character d
    std::cout << d  << '\n';
    std::cout << (char) 101 << '\n'; //cast number to ASCII character e
    int correct = 8;
    int questions = 10;
    double result = correct / questions * 100;
    std::cout << result << '%' << '\n'; //we used the int division, so it's 0%
    result = correct / (double)questions * 100;
    std::cout << result << '%' << '\n';


    return 0;
}