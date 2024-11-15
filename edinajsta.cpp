#include <iostream>

using namespace std;

int main() {
    int number;

    while(cin>>number) {
        if(number<10) {
            continue;
        }
        int temp= number;
        int lastdigit=0;
        int digit=0;
        bool flag=true;

        lastdigit=temp%10;
        temp=temp/10;
        while(temp>0) {
            digit=temp%10;
            if(!((lastdigit<5 && digit >=5) || (lastdigit>=5 && digit<5))) {
                flag=false;
            }
            lastdigit=digit;
            temp=temp/10;
        }

        if(flag==true) {
            cout<<number<<endl;
        }




    }
return 0;

}