class Solution {
public:
    bool isPalindrome(string s) {
        string str;
	    str.clear();
        for(int i = 0; i<s.size(); i++){
            char c = s[i];
            if(c>='a'&&c<='z' || c>='A'&&c<='Z' || c>='0'&&c<='9'){
                str.push_back(tolower(c));
            }
            
        }
        for(int i = 0; i<str.size()/2; i++){
            if(str[i]!=str[str.size()-i-1]){
                return false;
            }
         }
         
        return true;
    }
};