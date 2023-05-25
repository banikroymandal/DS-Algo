#include<iostream>
using namespace std;
#include<unordered_set>
class solution{
public:
int union_2array(int a[],int b[],int m,int n){
    
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }
    for(int j=0;j<n;j++){
        s.insert(b[j]);

    }
    return  s.size();
}
};
int main()
{
int a[]={10,20,32,25,26,50};
int b[]={54,10,26,36};
int m=sizeof(a)/sizeof(a[0]);
int n=sizeof(b)/sizeof(b[0]);
solution obj;
int ans=obj.union_2array(a,b,m,n);
cout<<ans<<endl;

return 0;
}