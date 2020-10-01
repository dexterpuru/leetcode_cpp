/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector<int>res;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(auto i:nestedList){
            stack<NestedInteger>st;
            st.push(i);
            while(!st.empty()){
                auto j =st.top();
                st.pop();
                if(j.isInteger())
                    res.push_back(j.getInteger());
                else{
                    vector<NestedInteger>tmp = j.getList();
                    for(int i=tmp.size()-1;i>-1;--i)
                        st.push(tmp[i]);
                }
            }
        } 
    }
    
    int next() {
        int i=res[0];
        res.erase(res.begin());
        return i;
    }
    
    bool hasNext() {
        return !res.empty();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */