#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
    std::ofstream pop;
    pop.open("result.txt");
    int n;
    std::cout<< "Enter number: ";
    std::cin>>n;
    
    for(int i = 1; i < n + 1; i++){
        pop << i << std::endl;
    }
    
    pop.close();
    return 0;
}
