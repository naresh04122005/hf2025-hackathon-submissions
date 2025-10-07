class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(int x:tasks){
            mp[x]++;
        }
        int ans=0;
        for(auto it:mp){
            int avi=it.second;
            if(avi==1) return -1;
            int rem=avi%3,add=avi/3;
            if(rem==0) ans+=add;
            else  ans+=(add+1);
            
        }
        return ans;
    }
};
