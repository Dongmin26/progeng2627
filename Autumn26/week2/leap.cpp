#include <iostream>

int main(){
    int year;
    bool is_leap;
    std::cout << "Please enter a year: " << std::endl;
    std::cin >> year;

    if((year % 4) == 0){
        is_leap = true;
        if ((year % 100) == 0) {
            if ((year % 400) == 0){
                is_leap = true;
            }
            else{
                is_leap = false;
            }
        }
    }
    else{
        is_leap = false;
    }
    if(is_leap == true){
        std::cout << "This year is leap year.";
    }
    else{
        std::cout << "This year is not leap year.";
    }
}