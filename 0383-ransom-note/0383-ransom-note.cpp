class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashMap;
        for(char c : magazine){
            if(hashMap.find(c) == hashMap.end())
                hashMap[c]=1;
            else
                hashMap[c]++;
        }

        for(char c : ransomNote){
            if(hashMap.find(c) != hashMap.end() && hashMap[c]>0)
                hashMap[c]--;
            else
                return false;
        }
        return true;

    }
};