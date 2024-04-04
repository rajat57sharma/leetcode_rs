class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sum =0;
        int n =milestones.size();
        int maxi =INT_MIN;
        for(int i =0 ; i<milestones.size(); i++)
        {
             sum += (long long) milestones[i];
             maxi = max(maxi , milestones[i]);
        }

        long long rest= sum -(long long)maxi;
        return min({rest*2 +1 , sum});

        
    }
};