#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i <= len - 1;i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << " " << arr[j];
        }
        std::cout << "\n";
    }
    return 0;
}
