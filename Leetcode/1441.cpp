class Solution {
public:
    vector<string> buildArray(vector<int> target, int n) {
        vector<string> ans;
        vector<int> st;

        int idx = 0;
        for(int i=1; i<=n; i++){
            if(st == target) return ans;

            if(target[idx] == i){
                ans.push_back("Push");
                st.push_back(i);
                idx++;     
            }
            else {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};