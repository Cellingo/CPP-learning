#include <iostream>

int main(){
    int age = 21;
    int year = 2005;
    int days = age*365;

    //some magic happens. It cuts the decimal part
    int num1 = 7.5;
    double num2 = 7.5;
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';

    //char variable
    char grade = 'A';
    char initial = 'B';
    char currency = '$';
    char overflow = 'ABCD';
    std::cout<< overflow << " ABCD truncated to D" << '\n';
    std::cout << initial << '\n';


    // boolean variable
    bool light = true;
    bool dark = false;

    // string variable
    std::string name = "Cellingo";
    std::cout << name << '\n';

    return 0;
}