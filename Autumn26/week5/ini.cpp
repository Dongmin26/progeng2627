#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    double min = 0;

    if(vin.size() == 0){
        return -1;
    }

    else{
        for(int i = 1; i < vin.size(); i++){
            if(vin[i] < vin[min]){
                min = i;
            }
        }
    }
    return min;
}

int main(){
    std::vector<double> v{1,2,-3,0.44,5.2,-1};
    std::cout << min_vector_element(v);
}