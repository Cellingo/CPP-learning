#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; //to denote the typedef
typedef std::string text_t;
int main(){
    std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist1; //they are the same with pairlist, actually

    std::string firstName;
    text_t secondName; //and again, their types are similar
    return 0;
}
