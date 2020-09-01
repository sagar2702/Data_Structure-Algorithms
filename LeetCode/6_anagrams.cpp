class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> match;
        vector<vector<string>> group;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            match[temp].push_back(strs[i]);
        }
        map<string, vector<string>>::iterator it;
        for(it=match.begin();it!=match.end();it++ )
        {
            group.push_back(it->second);        
        }
                         
        
       return group;
    }
};