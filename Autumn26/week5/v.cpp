#include <iostream>
#include <vector>

int main(){
    std::vector<double> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    std::cout << v[0] * (v[1] + v[2]);
}