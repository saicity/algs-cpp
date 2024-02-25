// Returns index if an element is in an array, otherwise returns the element.

/*
@param arr[] is the array being searched in
@param size is the size of the array
@param element is the element that is being searched for
@return the index of the element if found, 
int findElement(int arr[], int size, int element);
*/

#include <iostream>
int main() 
{
    // Unsorted array
    const int size = 10;
    int num[size] = {3, 0, 2, 27, 5, 14, 12, 1, 9, 4};
    findElement(num, 10, 14);
    return 0;
}

int findElement(int arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(element == arr[i])
        {
            return i;
        }
    }
    return -1;
}
