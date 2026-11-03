#include <iostream>

int sf(int n){
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            return cf;
        }
    }
    return 0;
}
 
int main(){
    int a, b;
    bool y = true;
    std::cin >> a >> b;
    std::cout << "Two number entered are " << a << " and " << b << std::endl;
    std:: cout << "Prime numbwer between these two: " << std::endl;
    for(int i = a; i <= b; i++){
        if(sf(i) == 0){
            std::cout << i << std::endl;
            y = false;
        }
    }
    if(y){
       std::cout << "none";
    }
}