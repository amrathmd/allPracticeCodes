#include<bits/stdc++.h>
using namespace std;

void repeatingChar(string s){
	map<char,int>mp;
	queue<char>q;
	q.push(s[0]);
	
	for(int i=0;i<s.length();i++){
		q.push(s[i]);
		mp[s[i]]++;
		while(!q.empty()){
			if(mp[q.front()]==1){
				cout<<q.front()<<" ";
				break;
			}
			else q.pop();
		}if(q.empty()){
			cout<<-1<<" ";
		}
	}cout<<endl;
}
int main(){
	repeatingChar("AQIIQAZPN");
}