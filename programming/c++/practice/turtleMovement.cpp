#include<iostream>
using namespace std;
void print_corrdinates(int n){
    int x=0,y=0;
    int angle=90;
    int quadrant=1;
    char arr[n];
    cin>>arr;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='L')
        {
            angle=angle+90;
        }
        else if(arr[i]=='F')
        {
            quadrant=angle/90;
            if(quadrant==1)
            {
                x=x+1;
            }
            else if(quadrant==2){
                y=y+1;
            }
            else if(quadrant==3)
            {
                x=x-1;
            }
            else
            {
                y=y-1;
            }
        }
        
    }cout<<x<<","<<y<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of charecters you want to input:"<<endl;
    cin>>n;
    print_corrdinates(n);


}