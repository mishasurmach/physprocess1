#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    //double* a = new double[atoi(argv[1])];
    std::vector<double> v;
    for (int i=0; i<atoi(argv[1]); i++){
        v.push_back(1.0/(i+1));
        std::cout << std::scientific << v[i] << " ";
    }
    
    return 0;
}
