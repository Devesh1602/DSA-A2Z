/*
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int i:asteroids)
        {
            while(!ans.empty()&& i<0 && ans.back()>0)
            {
                if(abs(i)>ans.back())
                {
                    ans.pop_back();
                    continue;
                }
                else if(abs(i)==ans.back())
                {
                    ans.pop_back();
                }
                i=0; //Both explode
            }
            if(i!=0){
            ans.push_back(i);
        }
        }
        return ans;
    }
};*/