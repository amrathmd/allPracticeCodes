#include<iostream>
#include<math.h>
using namespace std;
class complex{
    private:
        float real,img;
    public:
        complex(float r=0,float i=0){
            real=r;
            img=i;
        }

        complex operator / (complex const (&obj)){
            complex res;
            res.real=((real*obj.real)-(pow(-1,2))*(img*obj.img))/(pow(obj.img,2)+pow(obj.real,2));
            res.img=((real*obj.img)-(img*obj.real))/(pow(obj.img,2)+pow(obj.real,2));
            return res;
        }
        void display(){
            cout<<real<<"+ i"<<img<<endl;
        }
};
int main(){
    complex c1(2,3),c2(3,4),c3;
    c3=c1/c2;
    c3.display();
}