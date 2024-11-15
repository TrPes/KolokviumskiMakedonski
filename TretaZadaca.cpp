3. Од стандарден влез се чита еден природен број n.
 Меѓу природните броеви помали од n, да се најде оној 
чиј што збир на делителите е најголем. 
Во пресметувањето на збирот на делителите на даден број,
 да не се зема предвид самиот број.



#include <iostream>
using namespace std;

int main() {
   int n;
    cin>>n;
    int brojacnaSumi=0;
    int maxsuma=0;
    bool zname=false;
    int brojot=0;
    for(int i=n-1; i>1; i--) {
        int temp=i;
        int sumaNaDeliteli=0;
        for(int j=1; j<=temp/2; j++) {
            if(temp%j==0) {
                sumaNaDeliteli+=j;


            }

        }
        brojacnaSumi++;
        if(brojacnaSumi==1) {
            zname=true;
            maxsuma=sumaNaDeliteli;
        }


        if(maxsuma<sumaNaDeliteli) {
            maxsuma=sumaNaDeliteli;
            brojot=i;
        }


    }

    cout<<brojot<<endl;
    return 0;
}
