#include <iostream>
int binarySearch(int arr[], int low, int high, int element);

int main()
{
    const int size = 4;
    int arr[4] = {1, 2, 3, 4};
    std::cout << binarySearch(arr, 0, size - 1, 4);
}

int binarySearch(int arr[], int low, int high, int element)
{
    int midpoint = (low + high) / 2;
    if(arr[midpoint] == element)
    {
        return midpoint;
    }
    else if(arr[midpoint] > element)
    {
        return binarySearch(arr, low, midpoint - 1, element);
    }
    else if(arr[midpoint] < element)
    {
        return binarySearch(arr, midpoint + 1, high, element);
    }
}
