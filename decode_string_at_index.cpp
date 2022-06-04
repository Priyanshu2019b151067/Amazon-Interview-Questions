class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long  x = 0;
        for(int i = 0;i < s.size(); i++){
            if(isdigit(s[i])){
                x = x*(s[i] - '0');
            }else{x++;}
        }
        
        for(int i = s.size() -1;i >= 0;i--){
            k=k%x;
            if(k == 0 && isalpha(s[i])) {
                char ch = s[i];
                s = "";
                s += ch;
                return s;
             
            }
            if(isdigit(s[i])){
                x = x/(s[i] -'0');
            }else{
                x--;
            }
        
        }
        return "";
        
    }
};