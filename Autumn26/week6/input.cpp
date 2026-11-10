#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main(){
    std::ifstream infile;
    std::string n;
    std::cin >> n;
    std::vector<std::string> v;
    infile.open(n);

    if(!infile.is_open()){
        std::cout << "error opening file";
        return EXIT_FAILURE;
    }
 
    std::string tmp;
        
    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();
    for(int i = v.size() - 1; i >= 0 ; i--){
        std::cout << v[i] << std::endl;
    }
}