/*
@brief Finds the min element in an array and returns it's index
@param arr is the array being searched
@param size is the size of the array
@return returns index of min element
*/

int findMin(int arr[], int size);

#include <iostream>
int main() 
{
    const int size = 7;
    int arr[size] = {11, 3, 543, 18, 300, 2000, 34};
    
    std::cout << "Minimum element is located at index " << findMin(arr, size) << '\n';
    return 0;
}

int findMin(int arr[], int size)
{ 
    if (size == 1)
    {
        return 0;
    }
    else
    {
      int min = 0;
      for(int i = 0; i < (size - 1); i++)
      {
        if(arr[min] > arr[i + 1])
        {
            min = i + 1;
        }
      }
      return min;
    }
}
