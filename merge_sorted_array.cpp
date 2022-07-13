class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v(n+m);
        int i=0,j=0,k=0;
        while(m && n)
        {
            if(nums1[k]<nums2[j])
            {
                v[i++]=nums1[k++];
                m--;
            }
            else
            {
                v[i++]=nums2[j++];
                n--;
            }
        }
        if(m)
        {
            while(m--)
                v[i++]=nums1[k++];
                
        }
        else
        {
            while(n--)
                v[i++]=nums2[j++];
        }
        
        k=0;
        for(auto i: v)
            nums1[k++]=i;
            
        
    }
};
