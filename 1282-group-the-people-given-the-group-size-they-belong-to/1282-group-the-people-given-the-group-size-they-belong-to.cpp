class Solution {
public:
    vector<vector<int>> groupThePeople(const vector<int> &groupSizes) {

        unordered_map<int, vector<vector<int>>> mp;
        vector<pair<int, vector<int>>> toPush = {};

        vector<vector<int>> ans = {};

        for (int i = 0; i < groupSizes.size(); ++i) {
            auto s = groupSizes[i];
            if (!mp.count(s)) {
                mp[s] = {{i}};
                if (s == 1) {
                    ans.push_back(mp[s][mp[s].size() - 1]);
                }
                continue;
            }

            auto lastGroupI = mp[s].size() - 1;
            if (mp[s][lastGroupI].size() == s) {
                ans.push_back(mp[s][lastGroupI]);
                mp[s].push_back({i});
                continue;
            }

            mp[s][lastGroupI].push_back(i);
            auto sz = mp[s][lastGroupI].size();
            auto gs = groupSizes.size();
            if (sz == s) {
                bool found = false;
                for(int j = i + 1; j < groupSizes.size(); ++j) {
                    if(groupSizes[j] == s) {
                        found = true;
                        break;
                    }
                }
                if(!found) {
                    ans.push_back(mp[s][lastGroupI]);
                }
            }
        }

        return ans;
    }
};
