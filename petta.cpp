#include <iostream>
using namespace std;
int main(){

    int a, b;
    cin>>a>>b;

    int digit1=0, digit2=0;
    bool znamence=false;

    if(a<b) {
        swap(a,b);
    }
    if(a<=0 || b<=0) {
        cout<<"Invalid input";
        return 0;
    }
    int tempa=a;
    int tempb=b;

    while(tempa>0 && tempb>0) {

         digit1 = tempa%100/10;
         digit2 = tempb%10;
       if(digit1 != digit2) {
           cout<<"NE";
           return 0;
       }
        else if(digit1==digit2) {
            znamence=true;
        }


        tempa = tempa/100;
        tempb = tempb/10;
    }

    if(znamence==true) {
        cout<<"PAREN";
    }
    else {
        cout<<"NE";
    }












    return 0;
}