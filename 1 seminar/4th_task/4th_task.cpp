#include <fstream>
#include <iostream>

int main() {
    std::ofstream pop;
    pop.open("result.txt");
    
    for(int i = 1; i < 31; i++){
        pop << i << std::endl;
    }
    
    pop.close();
    return 0;
}
