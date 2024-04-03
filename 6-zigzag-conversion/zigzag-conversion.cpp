class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows<=1)
        return s;
        int  j =0, dir=-1;
        vector<string>v(numRows ,"");

        for(int i =0 ; i<s.length();i++)
        {
            if(j== numRows-1 || j==0)
            dir= dir*(-1);

            v[j]=v[j]+s[i];
            if(dir==1)j++;
            else
            j--;

        }

        string res;
        for(auto &it:v)
        res=res+it;

        return res;
        
    }
};