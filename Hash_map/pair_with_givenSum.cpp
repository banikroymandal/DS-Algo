#include<iostream>
using namespace std;
#include<unordered_set>
class solution{
public:
void pair_with_givenSum(int a[],int n,int x){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
     s.insert(a[i]);
    }
    for(auto it:s){
        if(s.find(x-it)!=s.end()){
            cout<<(x-it)<<" "<<it<<endl;   
            break;
        }
        
    }
}
};
int main()
{
int a[]={10,45,3,56,23};
int x=68;
int n=sizeof(a)/sizeof(a[0]);
solution obj;
obj.pair_with_givenSum(a,n,x);

return 0;
}