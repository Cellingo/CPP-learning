#include <iostream>

using text_t = std::string; //instead of typedef you use "using"

int main(){

    text_t string1 = "some piece of sentence";
    std::cout << string1;
    return 0;
}