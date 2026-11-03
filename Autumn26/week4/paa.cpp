#include <iostream>

void rec(double a, double b, double& c, double&d){
    c = 2 * (a + b);
    d = a * b;
}
int main(){
    double a = 2, b = 3, c, d;
    rec(a,b,c,d);
    std::cout << c << std::endl << d;
}