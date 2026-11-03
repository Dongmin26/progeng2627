#include <iostream>

void id(int a, int b, int& c, int& d){
    c = a / b;
    d = a - c * b; 
}
int main(){
    int a = 57, b = 4, c, d;
    id(a, b, c, d);
    std::cout << c << std::endl << d;
}