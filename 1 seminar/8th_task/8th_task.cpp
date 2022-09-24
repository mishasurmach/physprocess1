//#include <fstream>
#include <iostream>
#include <array>


int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibonacci(n - 2) + fibonacci(n - 1);
}

int main(int argc, char* argv[]) {
//    std::ofstream pop;
//    pop.open("result.txt");
    std::array<int, 50> arr = {0};
    for(int i = 1; i < atoi(argv[1]) + 1; i++){
        arr[i] = fibonacci(i);
        std::cout << arr[i] << " ";
    }
    
//    pop.close();
    return 0;
}
