#include <iostream>

int euclidsAlgorithm(int m, int n);

int main() {
    euclidsAlgorithm(119, 544);
}

int euclidsAlgorithm(int m, int n)
{
    int remainder = 1;
    //If n > m, swap values
    if(n > m){
        int temp = m;
        m = n;
        n = temp;
    }
    while(remainder != 0)
      {
        remainder = m % n;
        if(remainder != 0)
        {
            m = n;
            n = remainder;
        }
        else
        {
            std::cout << "The greatest divisor is " << n;
        }
    }
    return remainder;
}
