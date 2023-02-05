#include<bits/stdc++.h>
using namespace std;
void longestPalindromicSubstring(string s){
    int n=s.length();

    int table[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            table[i][j]=0;
        }
    } int maxLength=1;
    int start=0;
    for(int i=0;i<n;i++) table[i][i]=1;
    for(int i=0;i<n-1;i++){
        if(s[i+1]==s[i]) {
            table[i][i+1]=1;
            start=i;
            maxLength=2;
        }
    }
   
    for(int k=3;k<=n;k++){//k is length
        for(int i=0;i<n-k+1;i++){//start index
            int j=k+i-1;//end indexx with length k;
            if(s[i]==s[j] && table[i+1][j-1]==1) {
                table[i][j]=1;
                if(k>maxLength) {
                start=i;
                maxLength=k;
            }
            }
        }
    }cout<<maxLength<<endl;
}
void lps(string s){
    int n=s.length();
    int table[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            table[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        table[i][i]=1;
    }int start=0;
    int maxLength=1;
    for(int j=0;j<n-1;j++){
        if(s[j]==s[j+1]){
            table[j][j+1]=1;
            start=j;
            maxLength=2;
        }
    }
    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(s[i]==s[j] && table[i+1][j-1]==1){
                table[i][j]=1;
                if(k>maxLength){
                    start=i;
                    maxLength=k;
                }
            }
        }
    }string res;
    for(int i=start;i<=start+maxLength-1;i++){
        res.push_back(s[i]);
    }
    cout<<res<<endl;
}
int main(){
    string s;

    cin>>s;
    lps(s);
}