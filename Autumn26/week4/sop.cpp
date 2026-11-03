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

double sop(double x,double n){
    double s=0;
    for(int i = 1; i <= n; i++){
        s = s + po(x,i);
    }
    return s;
}
int main(){
    double b,p;
    std::cin >> b >> p;
    std::cout << sop(b,p);
}