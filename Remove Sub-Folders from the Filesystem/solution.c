using namespace std;
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(begin(folder), end(folder));
        vector<string> vec{ folder[0] };

        folder.erase(remove(folder.begin(), folder.end(), folder[0]), folder.end());

        for (auto& s : folder) {
            auto temp = vec.back();
            temp.push_back('/');
            if (string::size_type i = s.find(temp); i != 0u) {
                vec.emplace_back(s);
            }


        }

        return vec;

    }
};