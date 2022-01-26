bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        int i=0,j=n-1;
        bool ok=1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else{
                ok=0;break;
            }
        }
        if(ok)return true;
        else return false;
    }
