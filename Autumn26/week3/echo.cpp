#include <iostream>
#include <string>

int main(){
    bool i = true;
    std::string stop;

    while(i == true){
        std::cin >> stop;
        if(stop == "stop" or stop == "Stop" or stop == "STOP"){
            i = false;
        }
        else{
            std::cout << stop << std::endl;
        }
    }
}