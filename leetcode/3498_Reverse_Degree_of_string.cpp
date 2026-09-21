class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length(),le,to=0;
        for(int i=0;i<n;i++){
            int a=123-int(s[i]);
            le= a * (i+1);
            to+=le;
        }
        return to;
    }
};