#include <iostream>

int main(){
    int n, i = 0 , j = 0;
    std::cin >> n;

    while(j < n){
        
        while(i < n){
            std::cout << "*";
            i++;
        }
        i = 0;
        std::cout << std::endl;
        j++;
    }
}