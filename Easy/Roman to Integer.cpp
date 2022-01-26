int romanToInt(string s) {
        unordered_map<int,int>mp;
        char ch[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        vector<int>v;
        bool chek=1;
        int x=1;
        for(int i=0;i<7;i++){
            int k = ch[i]-'A';
            v.push_back(k);
            if(i==0)mp[k]=x;
            else if(chek){
                x*=5;
                chek = 0;
            }
            else{
                x*=2;
                chek = 1;
            }
            mp[k]=x;
        }
       
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int x = s[i]-'A';
            if(i==0) ans += mp[x];
            else{
                int y = (s[i-1]-'A');
                if(mp[x]>mp[y]){
                    ans-=mp[y];
                    ans+=(mp[x]-mp[y]);
                }
                else ans+=mp[x];
            }
        }
        return ans;
    }
