#include "mathematics.hpp" // for mathematics::heron
#include <iostream> // for std::cout
#include <algorithm> // for std::atof

// We need main function here!
int main(){
mathematics::Triangle t{ 0 , 0 , 0 };
std::cin >> t.a >> t.b >> t.c;
std::cout << mathematics::heron( t ) << std::endl;






}
