#include <iostream>
using namespace std;

class solution
{
public:
    void boundry_element(int mat[3][3], int r, int c)
    {
        if (r == 1)
        {
            for (int i = 0; i < c; i++)
            {
                cout << mat[0][i];
            }
        }
        if (c == 1)
        {
            for (int i = 0; i < r; i++)
            {
                cout << mat[i][0];
            }
        }
        else
        {
            for (int i = 0; i < c; i++)
            {
                cout << mat[0][i] << " ";
            }
            for (int i = 1; i < r; i++)
            {
                cout << mat[i][c - 1] << " ";
            }
            for (int i = c - 2; i >= 0; i--)
            {
                cout << mat[r - 1][i] << " ";
            }
            for (int i = r - 2; i >= 0; i--)
            {
                cout << mat[i][c - 2] << " ";
            }
        }
    }
};

int main()
{
    int mat[3][3] = {{10, 11, 13}, {12, 16, 15}, {15, 16, 14}};
    solution obj;
    obj.boundry_element(mat, 3, 3);
    return 0;
}