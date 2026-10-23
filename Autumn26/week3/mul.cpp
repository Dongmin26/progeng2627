#include <iostream>

int main(){
    int n, m = 1;

    std::cin >> n;

    while(m <= n){

        for(int i = 1; i <= n; i++){
            std::cout << i * m << "\t";
        }
        m++;
        std::cout << std::endl;

    }
}