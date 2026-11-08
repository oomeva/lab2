#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>

int main(){
    std::vector<std::string> filenames = {"file1.txt", "file2.txt", "file3.txt"};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> rand(1, 10);

    for (auto name : filenames){
        std::ofstream file(name);
        if(!file){
            std::cout << name << " not created";
        }
        for(int i = 0; i < 10; i++){
            file << rand(gen) << " ";
        }
    }
}
