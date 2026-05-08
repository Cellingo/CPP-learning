#include <iostream>

namespace first{
    int x = 15;
}
namespace second{
    int x = 25;
}
namespace third{
    int x = 35;
}
namespace forth{
    int x = 45;
}

int main(){
    //how to create consts and deal with them
    const double PI = 3.14; //constants are Upper Case
    double radius = 10;
    const double circumference = 2*PI*radius;

    //how namespaces works
    using namespace second;
    using std::cout;
    cout << first::x + x + third::x + forth::x;
    return 0;
}