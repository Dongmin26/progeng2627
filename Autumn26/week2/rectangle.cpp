#include <iostream>

int main(){
    double length, width, area, perimeter;
    std::cout << "What is the length of the rectangle?" << std::endl;
    std::cin >> length;
    std::cout << "What is the width of the rectangle?" << std::endl;
    std::cin >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    std::cout << "perimeter of the rectangle is " << perimeter << "." << std::endl << "area of the rectangle is " << area << ".";
}