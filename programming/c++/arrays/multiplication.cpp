#include<iostream>
using namespace std;
int main(){
    int n1,m1;
    int n2,m2;
    cout<<"enter number of rows and columns in row one:"<<endl;
    cin>>n1>>m1;
    int arr[n1][m1];
    cout<<"enter first matrix:"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>arr[i][j];
        }cout<<endl;
    }
    cout<<"enter number of rows and columns in matrix 2:"<<endl;
    cin>>n2>>m2;

    int arr1[n2][m2];
    cout<<"enter the second matrix:";
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>arr[i][j];
        }cout<<endl;
    }
    int multi[n1][m2];
    if(m1!=n2)
        cout<<"multiplication is impossible!"<<endl;
    else{
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                multi[i][j]=0;
                for(int k=0;k<n2;k++){
                    multi[i][j]=multi[i][j]+arr[i][k]*arr1[k][j];
                }
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                cout<<multi[i][j]<<" ";
        }cout<<endl;
        }
        }
        
    }
