class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int l=0,r=A.size()-1;
        vector <int> x(A.size());
        for(int i=A.size()-1;i>=0;i--)
        {
            if(abs(A[l])>=abs(A[r]))
            {
                x[i]=A[l]*A[l++];   
            }
            else
            x[i] = A[r] * A[r--];
        }
        return x;
    }
};