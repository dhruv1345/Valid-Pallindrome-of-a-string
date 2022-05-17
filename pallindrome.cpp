class Solution {
private:
    bool valid(char ch){
        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    
    bool checkPallindrome(string t){
        int st=0;
        int end=t.length()-1;
        while(st<end){
            if(t[st]!=t[end]){
                return 0;
            }
            else{
                st++;
                end--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        
        for(int j=0;j<temp.length();j++){
            temp[j]=toLowerCase(temp[j]);
        }
        
        return checkPallindrome(temp);
    }
    
};
