#include <iostream>

using namespace std;

int main() {
    int number;
    int lastdigit=0, predigit=0, cifra=0;



    while(cin>>number) {
        int temp=number;

        bool flag=true;
        if(temp<10) {
            continue;
        }

        if(temp<=99) {
            lastdigit=temp%10;
            predigit=temp/10;

            if(!(predigit<lastdigit || predigit>lastdigit)) {
                flag=false;
            }
        }

        if(number>=100 && number<=999) {
            while(temp>0) {
                lastdigit=temp%10;
                predigit=(temp%100)/10;
                cifra= temp/100;
                if(!(((cifra>predigit) && (predigit<lastdigit)) || ((cifra<predigit) && (predigit>lastdigit)))) {
                    flag=false;
                }
                temp/=1000;

            }

        }


        if(number>=1000) {
            lastdigit=temp%10;
            predigit=(temp%100)/10;
            cifra= (temp%1000)/100;

            while(temp>0) {

                if(!(((cifra>predigit) && (predigit<lastdigit)) || ((cifra<predigit) && (predigit>lastdigit)))) {
                    flag=false;
                    break;
                }
                lastdigit=predigit;
                predigit=cifra;

                temp/=1000;
                cifra= temp%10;
            }
        }
    if(flag==true) {
        cout<<number<<endl;

    }
    }




    return 0;

}