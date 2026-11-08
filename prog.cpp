#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> filenames = {"file1.txt", "file2.txt", "file3.txt"};
    
    for (auto name : filenames){
        std::ofstream file(name);
        if(!file){
            std::cout << name << " not created";
        }
        
    }
}
