#include <iostream>
using namespace std;

class solution
{
public:
    void boolean_matrix(int mat[4][3], int r, int c)
    {
        bool img[r][c]={0};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    img[i][j]=1;
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 1 && img[i][j] == 1)
                {
                    for (int k = j+1; k < c; k++)
                    {
                        if (mat[i][k] ==0)
                        {
                            mat[i][k] = 1;
                        }
                    }
                    for (int k = i+1; k < r; k++)
                    {
                        if (mat[k][j] ==0)
                        {
                            mat[k][j] = 1;
                           
                        }
                    }
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << mat[i][j] << " ";
            }
        }
    }
};

int main()
{
    int mat[4][3] = {{1, 0, 0},
                     {1, 0, 0},
                     {1, 0, 0},
                     {0, 0, 0}};

    solution obj;

    obj.boolean_matrix(mat, 4, 3);

    return 0;
}