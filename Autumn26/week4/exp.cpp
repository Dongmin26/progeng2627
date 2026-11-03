#include <iostream>
#include <cmath>

double po(double ba, double p){
    bool n = false;
    double r = 1;

    if(p<0){
        p = -p;
        n = true;
    }
    
    for(double i = 0; i < p; i++){
        r = r * ba;
    }

    if(n){
        r = 1/r;
    }

    return r;
}

int main(){
    double b, i;
    std::cin >> b >> i;
    std::cout << std::pow(b,i) << std::endl << po(b,i);

}
