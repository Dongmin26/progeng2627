#include <iostream>

int main(){
    double n, m, r = 1;

    std::cin >> n;
    m = n;
    for(int i = 0; i < m; i++){
        r = r * n;
        n = n - 1;
    }
    std::cout << r << std::endl;
}