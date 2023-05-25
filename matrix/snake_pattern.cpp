#include <iostream>
using namespace std;

class solution
{
public:
    void snake_pattern(int arr[3][3],int m,int n)
    {
        for (int i = 0; i < m; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " ";
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    cout << arr[i][j] << " ";
                }
            }
        }
    }
};
int main()
{
    int arr[3][3] = {{10, 11, 13}, {12, 16, 15}, {15, 16, 14}};
    solution obj;
    obj.snake_pattern(arr, 3, 3);

    return 0;
}
