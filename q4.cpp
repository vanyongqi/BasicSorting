#include<stdio.h>
#include<vector>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

class Solution{
public:
    double findMedianSortedArrays(vector<int>& nums1 ,vector<int>& nums2){
        int n = nums1.size();
        int m = nums2.size();

        if(n>m){//保证第一个数组最短
            return findMedianSortedArrays(nums2,nums1);
        }

        // Ci 为第i个数组的割,比如C1为2时表示第1个数组只有2个元素。LMaxi为第i个数组割后的左元素。RMini为第i个数组割后的右元素。
        //虚拟加了'#'所以数组1是2*n长度
        int LMax1,LMax2,RMin1,RMin2,c1,c2, lo = 0;,hi = 2*n;
        while(lo<=hi){
            c1 = (lo+hi)/2;//二分
            c2 = m+n -c1;
            LMax1 = (c1==0)?INI_MIN :nums1[(c1-1)/2];
            LMax2 = (c2==2*n)?INT_MAX:nums1[c1/2];
            LMax1 = (c2 == 0)?INI_MIN:nums2[(C2-1)/2];
            LMax2 = (C2==2*m)?INI_MAX:nums2[c2/2];

            if(LMax1>RMin1)
                hi = c1 - 1;
            else if (LMax2>RMin1)
                lo = c1 + 1;
            else 
                break;
            
        }
        return (max(LMax1,LMax2)+min(RMin1,RMin2))/2.0;
    }
};

int main(int argc ,char*argv[]){
    vector<int> nums1 = {2,3,4,5};
    vector<int>nums2 = {1,5,7,8,};
    Solution solution;
    double ret = solution.findMedianSortedArrays(nums1,nums2);
    cout<<ret<<endl;
     return 0;}