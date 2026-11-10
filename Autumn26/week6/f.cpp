#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

int search_vector(std::string s, const std::vector<std::string>& vout){
    bool p = false;

    for(int i = 0; i < vout.size(); i++){
        if(vout[i] == s){
            p = true;
        }
        if(p){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vout) == -1){
            vout.push_back(vin2[i]);
        }
    }
} 

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) != -1){
            vout.push_back(vin1[i]);
        }  
    }
}

int main(){
    std::ifstream f1, f2;
    std::ofstream in, u;
    std::string tmp;
    std::vector <std::string> vin1, vin2, vu, vint;
    f1.open("f1.txt");
    f2.open("f2.txt");
    in.open("int.txt");
    u.open("u.txt");

    if(!f1.is_open() || !f2.is_open() || !in.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while(f1 >> tmp){
        vin1.push_back(tmp);
    }

    while(f2 >> tmp){
        vin2.push_back(tmp);
    }

    union_vector(vin1, vin2, vu);
    intersection_vector(vin1, vin2, vint);

    for(int i = 0; i < vint.size(); i++){
        in << vint[i] << std::endl;
    }

    for(int i = 0; i < vu.size(); i++){
        u << vu[i] << std::endl;
    }

    f1.close();
    f2.close();
    u.close();
    in.close();
}