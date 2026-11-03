#include <iostream>
#include <vector>

int main(){
    std::vector<int> s;
    int tmp = 1;

    std::cout << "please enter a sequence terminated by 0" << std::endl;
    
    while(tmp != 0){ 
        std::cin >> tmp; 
        s.push_back(tmp); 
    }

    std::cout << "you entered the following sequence" << std::endl;

    for(int i = 0; i < s.size(); i++){

        std::cout << s[i] << std::endl;
    }

    std::cout << "in reverse order:" << std::endl;

    for(int i = s.size() - 1; i >= 0; i--){
        std::cout << s[i] << std::endl;
    }

}