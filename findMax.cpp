/*
@brief Finds the max element in an array and returns it's index
@param arr is the array being searched
@param size is the size of the array
@return returns index of max element
*/

int findMax(int arr[], int size);

#include <iostream>
int main() 
{
    const int size = 11;
    int arr[size] = {11, 3, 543, 18, 300, 2000, 34};
    
    std::cout << "Maximum element is located at index " << findMax(arr, size) << '\n';
    return 0;
}

int findMax(int arr[], int size)
{ 
    if (size == 1)
    {
        return 0;
    }
    else
    {
      int max = 0;
      for(int i = 0; i < (size - 1); i++)
      {
        if(arr[max] < arr[i + 1])
        {
            max = i + 1;
        }
      }
      return max;
    }
}
