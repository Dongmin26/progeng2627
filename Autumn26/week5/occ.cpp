#include <iostream>
#include <vector>

int main(){
    std::vector<double> v,v1;
    double n, i, s, o = 0;
    std::cout << "Enter # of numbers want to store: ";
    std::cin >> n;

    for(;n > 0; n--){
        std::cout << "Enter the number: ";
        std::cin >> i;
        v.push_back(i);
    }

    std::cout << "Enter the number s: ";
    std::cin >> s;

    for(int j = 0; j < v.size(); j++){

        if(v[j] == s){
            o++;
            v1.push_back(j);
        }

    }

    std::cout << "There are " << o << " occurrences of " << s << " at indices" << std::endl;
    
    for(int k = 0; k < v1.size(); k++){
        std::cout << v1[k] << std::endl;
    }
}