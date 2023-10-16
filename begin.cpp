#include <iostream>

int main() {
    std::cout<<"Please, enter the first number"<<std::endl;
    int a;
    std::cin>>a;
    std::cout<<"Please, enter the second number"<<std::endl;
    int b;
    std::cin>>b;
    std::cout<<"Please, select the type of operation from list: '+', '-', '*', '/'"<<std::endl;
    char t;
    std::cin>>t;
    double c;
    switch (t) {
        case '+':
            std::cout<<a+b<<std::endl;
        case '-':
            std::cout<<a-b<<std::endl;
        case '*':
            std::cout<<a*b<<std::endl;
        case '/':
            c = (double)a / (double)b;
            std::cout<<c<<std::endl;
    }

    return 0;
}