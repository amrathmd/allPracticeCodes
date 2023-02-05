//program to find number of ones in a binary number of a number:
#include<iostream>
using namespace std;
int numOfOnes(int n){
    int count=0;
    while(n!=0){
        n=(n & (n-1));
        count++;

    }return count;
}
int main(){
    int num;
    cin>>num;
    cout<<"the number of ones:"<<numOfOnes(num)<<endl;
}