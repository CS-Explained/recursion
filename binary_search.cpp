#include <iostream>

int BinarySearch (int * arr, int key, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high)/2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (key < arr[mid])
    {
        return BinarySearch (arr, key, low, mid - 1);
    }
    return BinarySearch (arr, key, mid + 1, high);

}
int main ()
{
    int arr[] = {1,2,3,4,5,6};
    
    std::cout << BinarySearch(arr, 5, 0, 5) << std::endl; 
    std::cout << BinarySearch(arr, 10, 0, 5) << std::endl; 
    return 0;
}