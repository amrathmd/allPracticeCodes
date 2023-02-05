#include<bits/stdc++.h>
using namespace std;
void longestPalindromicSubstring(string s ){
    int n=s.length();
    int start=0;
    int maxLength=1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int flag=1;
            for(int k=0;k<(j-i+1)/2;k++){
                if(s[k+i]!=s[j-k]) flag=0;
            }
            if(flag && (j-i+2)>maxLength) {
                start=i;
                maxLength=j-i+2;
            }
        }

    }
    for(int i=start;i<start+maxLength-1;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
int main(){
    string s;
    cin>>s;
    longestPalindromicSubstring(s);

}