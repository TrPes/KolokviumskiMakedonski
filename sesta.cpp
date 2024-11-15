#include <iostream>
using namespace std;
int main(){

    int z;
    cin>>z;
    int a,b;
    int counter=0;
    int numbers=0;
    while(cin>>a>>b) {
        if(a==0 && b==0 ) {
            break;
        }
        if(a+b==z) {
            counter++;
        }
        numbers++;
    }



    cout<<"Vnesovte "<<counter<<" parovi od broevi chij zbir e "<<z<<endl;
    cout<<"Procentot na parovi so zbir "<<z<<" e "<<((float)counter/numbers)*100<<"%"<<endl;





    return 0;
}