#include <iostream>
#include <string>

int main(){
    std::string user_firstname;
    std::string user_surname;
    std::cout << "What is yout first name?" << std::endl;
    std::cin >> user_firstname;
    std::cout << "What is your surname?" << std::endl;
    std::cin >> user_surname;
    std::cout << "Hello, " << user_firstname << " " << user_surname << std::endl;
}