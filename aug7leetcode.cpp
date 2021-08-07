class Solution
{
public:
    string makeFancyString(string s)
    {
        string a = "";
        for (const auto &c : s)
        {
            if (a.size() >= 2 && a[a.size() - 1] == c && a[a.size() - 2] == c)
                continue;
            a.push_back(c);
        }
        return a;
    }
};