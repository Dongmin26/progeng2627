#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){
    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;
}

int main(){
    std::vector<double> v;
    double n, i;
    std::cout << "Enter # of numbers want to store: ";
    std::cin >> n;

    for(;n > 0; n--){
        std::cout << "Enter the number: ";
        std::cin >> i;
        v.push_back(i);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}