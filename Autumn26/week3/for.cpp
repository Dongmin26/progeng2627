#include <iostream>

int main(){
    int n;
    double x, r = 1;
    std::cin >> x >> n;

    for(int i = 0; i < n; i++){
        r = r * x;
    }
    std::cout << r << std::endl;
}