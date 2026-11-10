#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main(){
    std::ifstream i;
    std::ofstream o;
    std::string r, p, tmp;
    std::vector<std::string> v;
    std::cout << "enter name of input file" << std::endl;
    std::cin >> r;
    std::cout << "enter name of output file" << std::endl;
    std::cin >> p;

    i.open(r);
    o.open(p);
    
    if(!o.is_open() || !o.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while(i >> tmp){
        v.push_back(tmp);
    }
    
    for(int j = v.size() - 1; j >= 0; j--){
        o << v[j] << std::endl;
    }

    i.close();
    o.close();
}