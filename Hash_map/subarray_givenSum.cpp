#include <iostream>
using namespace std;
#include <unordered_set>
class solution
{
public:
    int subarray_0Sum(int *arr, int m,int sum)
    {
        int preSum = 0;
        unordered_set<int> s;
        for (int i = 0; i < m; i++)
        {
            preSum += arr[i];
            s.insert(preSum);

            if (preSum == sum)
            {
                return true;
            }

            else if (s.find(preSum-sum) != s.end())
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    int a[] = {1, 2, -1, 3, 5, 6, -13};
    int x=90;
    int m = sizeof(a) / sizeof(a[0]);
    solution obj;
    cout << obj.subarray_0Sum(a, m,x) << endl;

    return 0;
}