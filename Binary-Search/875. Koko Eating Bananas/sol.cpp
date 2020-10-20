
#include<bits/stdc++.h>

using namespace std ;
const int inf = 2e9+18;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end());
        auto f = [&](const int mid) -> bool {
	        int time = 0;
	        for (int P: piles)
	            time += (P - 1) / K + 1;
	        return time <= H;
    	}
	    while (lo < hi) {
	        int mi = lo + (hi - lo) / 2;
	        if (f(piles, H, mi)){
	        	hi = mi;	
			}
	        else{
	        	lo = mi + 1;	
			}
    }
   	 return lo;
    }
};

int main() { }
