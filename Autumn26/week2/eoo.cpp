#include <iostream>

int main(){
    int n, r;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    r = n % 2;
    if(r == 0){
        std::cout << "The number is even.";
    }
    else{
        std::cout << "The number is odd.";
    } 
}