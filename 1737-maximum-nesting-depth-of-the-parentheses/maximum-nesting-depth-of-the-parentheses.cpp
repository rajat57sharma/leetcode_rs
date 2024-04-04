class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int n = s.length();
        int maxi =INT_MIN;
        
        for(int i =0; i<n ; i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
                int si = st.size();
                maxi = max(maxi ,si);

            }
            else if(s[i]==')')
            {
                st.pop();
                
            }
        }
        if(maxi == INT_MIN)
        return 0;
        else
        return maxi;
    }
};