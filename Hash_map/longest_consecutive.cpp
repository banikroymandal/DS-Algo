#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int longest_consecutive(int *arr, int n)
    {
        set<int>s;
        int res = 1;
        int count=1;
        for(int i = 1; i < n; i++)
        {
            s.insert(arr[i]);
           
            
        }
        for(int i = 1; i < n; i++)
        {
            while(s.find(arr[i]+count)!=s.end()){
                count++;
            }
            res=max(res,count);
           
            
        }

        res = max(res, count);
        return res;
    }
};
int main()
{
    int arr[] = {1, 6, 5, 8, 9, 22, 7, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution obj;
    int ans=obj.longest_consecutive(arr, n);
    cout<<ans<<endl;
    return 0;
}