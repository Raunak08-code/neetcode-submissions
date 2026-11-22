class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;

        for(int i=0; i<nums1.size(); i++)
            temp.push_back(nums1[i]);
            
        for(int i=0; i<nums2.size(); i++)
            temp.push_back(nums2[i]);

        sort(temp.begin(),temp.end());
        int mid = temp.size()/2;

        if(temp.size() % 2 != 0)  return (double) temp[mid];
        else return (double) (temp[mid] + temp[mid-1])/2;
    }
};
