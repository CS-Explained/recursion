#include <iostream>
int ArraySum(int *arr, int start, int end)
{
    if (start > end)
    {
        return 0;
    }
    return arr[start] + ArraySum(arr, start + 1, end);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::cout << ArraySum(arr, 0, 5) << std::endl;

    return 0;
}