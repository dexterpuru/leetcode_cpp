class Solution {
  private:
    int bfs(Node* root) {
        queue<pair<Node*, int>> q;
        q.push({root, 1});
        int ans = 1;

        while(!q.empty()) {
            pair<Node*, int> v = q.front();
            q.pop();

            for(int i = 0; i < v.first->children.size(); ++i) {
                q.push({v.first->children[i], v.second + 1});
                ans = max(ans, v.second + 1);
            }
        }

        return ans;
    }
  public:
    int maxDepth(Node* root) {
        if(root == NULL) return 0;
        return bfs(root);
    }
};