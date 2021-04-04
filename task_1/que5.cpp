class Solution {
public:
    // add to set and return size of set
    int uniqueMorseRepresentations(vector<string>& words) {
        string code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(string each : words)
        {
            string encoded = "";
            for(char ch : each)
            {
                encoded += code[(ch - 'a')];
            }
            s.insert(encoded);
        }
        return s.size();
    }
};