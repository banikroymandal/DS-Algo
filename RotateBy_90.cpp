#include<iostream>
using namespace std;
class solution{
public:
void print_transpose(int mat[3][3],int r,int c){
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
        if(j>=i){
            swap(mat[i][j],mat[j][i]);
        }
       }
    }
    int low=0;
    int high=r-1;
    while(low<high){
        for(int j=0;j<c;j++){
            swap(mat[low][j],mat[high][j]);
        }
        low++;
        high--;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
    }
}
};
int main()
{
int mat[3][3] = {{10, 11, 13}, {12, 16, 15}, {15, 16, 14}};
    solution obj;
    obj.print_transpose(mat, 3, 3);
    return 0;
return 0;
}