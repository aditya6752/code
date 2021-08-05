class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int> mp; //for track all the count
        vector<string> ans;            //for ans
        for (int i = 0; i + 9 < s.length(); i++)
        {
            string temp = s.substr(i, 10); // s.substr(i,10) means it take a substring of length 10 starting
            mp[temp]++;                    //  from i th index.
        }
        for (auto val : mp) // traverse in map
        {
            if (val.second > 1)
                ans.push_back(val.first); //if vaal.second>1 consider in ans
        }
        return ans;
    }
};
