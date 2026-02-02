class Solution {
public:
    int lengthOfLastWord(string s) {
        int le = 0;
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        while (i >= 0 && s[i] != ' ') {
            le++;
            i--;
        }
        return le;
    }
};