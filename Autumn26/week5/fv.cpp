#include <iostream>
#include <vector>

int main(){
    std::vector<double> v;
    double n, i, t;
    std::cout << "Enter # of numbers want to store: ";
    std::cin >> n;

    for(;n > 0; n--){
        std::cout << "Enter the number: ";
        std::cin >> i;
        v.push_back(i);
    }

    std::cout << "Print number in the vector below: ";
    std::cin >> t;

    for(int j = 0; j < v.size(); j++){
    
        if(v[j] < t){
            std::cout << v[j] << std::endl;
        }
    
    }
}