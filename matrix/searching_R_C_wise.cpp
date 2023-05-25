#include <iostream>
using namespace std;
class solution
{
public:
    void print_transpose(int mat[3][3], int r, int c, int x)
    {
        int i = 0, j = c - 1;
        while (i < r && j >= 0)
        {
            if (mat[i][j] == x)
            {
                cout << "row->" << i << "column->" << j << endl;
               return;
            }
            else if (mat[i][j] > x)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        cout<<"not found"<<endl;
        
    }

};

int main()
{
    int mat[3][3] = {{10, 11, 13}, {12, 16, 15}, {15, 16, 14}};
    solution obj;
    int x = 50;
    obj.print_transpose(mat, 3, 3, x);
   
    return 0;
}