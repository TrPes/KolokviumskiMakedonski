#include <iostream>

using namespace std;

int main() {
    int number;
    int posledna=0,  max=0;

    bool first=false;
    int brojacNaBroevi=0;
    int sum=0;

    while(cin>>number) {

        int temp=number;
        brojacNaBroevi++;
        first=false;
        if(brojacNaBroevi<=1) {
            first=true;
        }






        if(first==true) {
            while(temp>0) {
                    posledna=temp%10;
                    if(posledna>max) {
                        max=posledna;
                    }

                    sum=sum+posledna;
                    temp=temp/10;
                }
            cout<<number<<": "<<sum<<endl;

            }
        else {
            sum=0;
            sum=sum+max;
            max=0;
            while(temp>0) {
                posledna=temp%10;
                if(posledna>max) {
                    max=posledna;
                }
                sum=sum+posledna;
                temp=temp/10;
            }
            cout<<number<<": "<<sum<<endl;
        }

        }
    }






