#include <iostream>

void myswap(int& n1, int& n2){
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort(int& n1, int& n2, int& n3){
    if(n1 > n2){
        myswap(n1,n2);
    }
    if(n2 > n3){
        myswap(n2,n3);
    }
    if(n1 > n2){
        myswap(n1,n2);
    }
}

int main(){
    int n1, n2, n3;

    std::cout << "please enter three values" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;

    sort(n1, n2, n3);

    std::cout << "after sorting:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
}