class Solution {
public:
bool isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    return true;
    return false;
}
    string reverseVowels(string s) {
        int n = s.size();
        for(int i =0,j=n-1 ; i<j;i++,j--)
        {
            while(i<j && isvowel(s[i]) == 0)
            i++;
            while(i<j && isvowel(s[j])==0)
            j--;
            if(i<j)
            swap(s[i],s[j]);
        }

        return s;
    }
};
