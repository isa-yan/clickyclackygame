#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

/*
clang++ -g index.cpp -o index
./index
*/

int main(){
    std::string meows[4] = {"mraow","meow","mrrp","purr"};
    std::string cpp_terms[4] = {"std::string","std::cout","#include","int main(){}"};
    char x;

    std::cout<<"what selection of words would you like to try your speed out :3 "<<"\n";
    std::cout<<"insert 'm' if you want cats. insert 'c' if you want cpp vocab >:3"<<"\n";
    std::cin>>x;

    while (x!='m' and x!='c'){
        std::cout<<"that ain't it :c"<<"\n";
        std::cin>>x;
    }
    
    if (x=='m')
        std::cout<<"so meow it is! :3";
    else if (x=='c')
        std::cout<<"cpp more like bada bing amiright? >W<";

    return 0;
}