#include <iostream>
using namespace std;
int main(){
    char broj;
    int suma=0;
    while (cin>>broj){
       if(broj=='.') {
           break;
       }
        if(broj>='A' && broj<='F') {
            suma=suma+10+broj-'A';
        }
        if(broj>='a' && broj<='f') {
            suma=suma+10+broj-'a';
        }
        if(broj>='0' && broj<='9') {
            suma=suma+broj-'0';
        }



    }




    if(suma%100==16 && suma%16==0 ) {
        cout<<"Poln pogodok";

    }
    else if(suma%16==0) {
        cout<<"Pogodok";

    }
    else {
        cout<<suma;
    }

        return 0;
}