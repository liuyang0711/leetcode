#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ret;
        int cnt_max = INT_MIN;
        unordered_map<int, int> cnt;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            if (++cnt[*it] > cnt_max)
            {
                cnt_max = cnt[*it];
                ret = *it;
            }
        }
        return ret;
    }
};