class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.size()==0)
            return 0;
        int left=0,right=0,m=0;
        for(int i=1;i<A.size()-1;i++)
        {
            if(A[i]>A[i+1] && A[i]>A[i-1])
            {
                left=i-1;
                right=i+1;
                while(left>0 && A[left]>A[left-1])
                {
                    left--;
                }
                while(right<A.size()-1 && A[right]>A[right+1])
                    right++;
                m=max(m,right-left+1);
            }
        }
        return m;
    }
};