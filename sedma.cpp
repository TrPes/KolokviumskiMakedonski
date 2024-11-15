#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    char znak;

    for(int i=1;i<=m;i++) {
      cout<<"%";
    for(int j=2;j<=m-1;j++) {
        if(i==1 || i==m) {
            cout<<"@";
        }
        else if(j>1 && j<=m-1) {
            cout<<".";
        }

    }
        cout<<"%"<<endl;
    }




    return 0;
}
