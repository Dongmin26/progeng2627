#include <iostream>

int main(){
    double n1, n2, sum, prod;
    std::cout << "Please enter the first number: " << std::endl;
    std::cin >> n1;
    std::cout << "Please enter the second number: " << std::endl;
    std::cin >> n2;
    sum = n1 + n2;
    prod = n1 * n2;
    std::cout << n1 << " + " << n2 << " = " << sum << std::endl; 
    std::cout << n1 << " x " << n2 << " = " << prod;
}