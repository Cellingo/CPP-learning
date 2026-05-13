#include <iostream>

int main() {
    std::string name;
    std::string surname;

    std::cout << "What's your name?: " << '\n';
    std::cin >> name;

    std::cout << "Hello, " << name << '\n';

    std::cout << "write your surname" << '\n';
    std::cin >> surname;

    std::cout << "Hello, " << name << ' ' << surname << '!' << '\n';

    //let's learn how to retrieve lines with spaces

    std::string fullName;
    std::getline(std::cin, fullName); //it works weird because cin leaves the \n in buffer
    std::cout << "Hello, " << fullName << '\n';

    std::getline(std::cin >> std::ws, fullName); //it works better bcs std::ws eliminates \n
    std::cout << "Hello, " << fullName << '\n';

    return 0;
}