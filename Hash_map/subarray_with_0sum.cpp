#include <iostream>
using namespace std;
#include <unordered_set>
class solution
{
public:
    int subarray_0Sum(int *arr, int m)
    {
        int preSum = 0;
        unordered_set<int> s;
        for (int i = 0; i < m; i++)
        {
            preSum += arr[i];
            s.insert(preSum);

            if (preSum == 0)
            {
                return true;
            }

            else if (s.find(preSum) != s.end())
            {
                return true;
            }
        }
    }
};
int main()
{
    int a[] = {1, 2, -1, 3, 5, 6, -13};
    int m = sizeof(a) / sizeof(a[0]);
    solution obj;
    cout << obj.subarray_0Sum(a, m) << endl;

    return 0;
}