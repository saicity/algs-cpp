/*
@brief program that counts the occurences of an element in an array
@param arr[] is the array being searched in
@param size is the size of the array
@param element is the element being counted in the array
*/
#include <iostream>

int countOccurences(int arr[], int size, int element);

int main()
{
    const int size = 8;
    int num[size] = {1, 2, 2, 4, 7, 8, 9, 6};
    std::cout << countOccurences(num, size, 2);

    return 0;
}

int countOccurences(int arr[], int size, int element)
{
    //Store the number of occurences
    int count = 0;
    
    for(int i = 0; i < size; i++)
    {
        if(element == arr[i])
        {
            count += 1;
        }
    }
    if(count == 0)
    {
        return -1;
    }
    else
    {
       return count;     
    }
}
