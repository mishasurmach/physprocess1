#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
    std::ofstream pop;
    pop.open("result.txt");
    
    for(int i = 1; i < atoi(argv[1]) + 1; i++){
        pop << i << std::endl;
    }
    
    pop.close();
    return 0;
}
