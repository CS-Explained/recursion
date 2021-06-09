#include <iostream>
int LinearSearch (int * arr, int key, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    if (key == arr [start])
    {
        return start;
    }
    return LinearSearch (arr, key, start + 1, end);
}
int main ()
{
    int arr [] = {1,2,3,4,5,6};
    std::cout << LinearSearch (arr, 4, 0, 5) << std::endl;
    std::cout << LinearSearch (arr, 10, 0, 5) << std::endl;
    return 0;
}