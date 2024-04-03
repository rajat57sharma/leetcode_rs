class Solution {
private:
  bool solve(int n)
  {
   
    if(n==1)
    return true;
    else if(n%4!=0 || n<4 )
    return false;

    return  solve(n/4); 
  }
public:
    bool isPowerOfFour(int n) {
        
        

        return solve(n);
        
    }
};