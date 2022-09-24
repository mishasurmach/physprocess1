#include <fstream>
#include <iostream>

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibonacci(n - 2) + fibonacci(n - 1);
}

int main(int argc, char* argv[]) {
    std::ofstream pop;
    pop.open("result.txt");
    
    for(int i = 1; i < atoi(argv[1]) + 1; i++){
        pop << i << " " << fibonacci(i) << std::endl;
    }
    
    pop.close();
    return 0;
}
