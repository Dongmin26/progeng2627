#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    bool b = true;

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            b = false;
            return n;
        }
    }

    return -1;
}

int main(){
    int n = 12;
    std::vector<int> v{2,1,4,3,5,1,4,2,3};
    std::cout << search_vector(n, v);
}