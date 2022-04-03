class Solution {
public:
     bool helper_Palindrome(string s, int i, int j) {
        while (i<j){
            if (s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i=0, j=s.length()-1;
        while (i<j) {
            if (s[i]!=s[j]) {
               
                return helper_Palindrome(s, i+1, j) || helper_Palindrome(s, i, j-1);
            }
           
            i++;
            j--;
        }
        return true;
    }
};