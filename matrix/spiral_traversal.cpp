#include <iostream>
using namespace std;
class solution
{
public:
    void spiral_traversal(int mat[4][4], int c, int r)
    {
        int top = 0, left = 0, right = c - 1, bottom = r - 1;
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                cout << mat[top][i] << " ";
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                cout << mat[i][right] << " ";
            }
            right--;
            for (int j = right; j >= left; j--)
            {
                cout << mat[bottom][j] << " ";
            }
            bottom--;
            for (int j = bottom; j >= top; j--)
            {
                cout << mat[j][left] << " ";
            }
            left++;
        }
    }
};
int main()
{
    int mat[4][4] = {{10, 11, 13, 48}, {12, 16, 15, 21}, {15, 16, 14, 32}, {45, 56, 58, 23}};
    solution obj;
    obj.spiral_traversal(mat, 4, 4);

    return 0;
}