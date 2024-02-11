//Q1

#include <iostream>

int main() {
    //list [a, b, c, d] gets replaced to [b, c, d, a]
    //I will use a temp variable for a
    /*
    Mathematical notation
    hold <- a
    a <- b
    b <- c
    c <- d
    d <- hold
    */
    int list[] = {1, 2, 3, 4};
    std::cout << "Orginal value of a: " << list[0] << '\n';
    std::cout << "Original value of b: " << list[1] << '\n';
    std::cout << "Orginal value of c: " << list[2] << '\n';
    std::cout << "Original value of d: " << list[3] << '\n';
    std::cout << '\n';
    
    //Replacement
    int tempValueOfA = list[0];
    list[0] = list[1];
    list[1] = list[2];
    list[2] = list[3];
    list[3] = tempValueOfA;
    
    //Displaying replacement
    std::cout << "Replaced value of a: " << list[0] << '\n';
    std::cout << "Replaced value of b: " << list[1] << '\n';
    std::cout << "Replaced value of c: " << list[2] << '\n';
    std::cout << "Replaced value of d: " << list[3] << '\n';

    return 0;
}
