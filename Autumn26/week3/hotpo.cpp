#include <iostream>

int main(){
    int n, step = 0, max;
    std::cin >> n;
    max = n;
    while(n != 1){
        if(n%2 ==0){
            n = n/2;
        }
        else{
            n = n*3 + 1;
        }
        std::cout << n << " ";
        if(max < n){
            max = n;
        }
        step++;

    }

    std::cout << std::endl << step;
    std::cout << std::endl << max;
}