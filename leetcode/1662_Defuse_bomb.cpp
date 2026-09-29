class Solution { 
public: 
    vector<int> decrypt(vector<int>& code, int k) { 
        int n=code.size(), j=0, to=0, p; 
        vector<int> ans(n, 0); 
        
        if(k==0){ 
            for(int i=0;i<n;i++){ 
                ans[i]=0; 
            } 
        } 
        else if(k>0){ 
            for(int i=0;i<n;i++){ 
                p=i+1;
                while(j<k){ 
                    if(p==n){ 
                        p=0; 
                    } 
                    to+=code[p]; 
                    p++; 
                    j++; 
                } 
                j=0; 
                ans[i]=to; 
                to=0; 
            } 
        } 
        else{ 
            for(int i=0;i<n;i++){ 
                p=i-1; 
                while(j < -k){ 
                    if(p < 0){ 
                        p=n-1; 
                    } 
                    to+=code[p]; 
                    p--; 
                    j++; 
                } 
                j=0; 
                ans[i]=to; 
                to=0; 
            } 
        } 
        return ans; 
    } 
};
