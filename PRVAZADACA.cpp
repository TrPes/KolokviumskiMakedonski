 #include <iostream>


using namespace std;



int main()
{
int m,n;
    cin>>m>>n;
    bool flag=false;
    for(int i=m; i<=n; i++) {
        int temp=i;
        int brojacNaParni=0;
        int brojacNaCifri=0;
        int brojacnabroevi=0;
        while(temp>0) {
            int poslednaCifra=0;
            poslednaCifra=temp%10;
            if(poslednaCifra%2==0) {
                brojacNaParni++;
            }
            temp/=10;
            brojacNaCifri++;
        }

        if(brojacNaParni==brojacNaCifri) {
            flag=true;
            cout<<i<<endl;
            brojacnabroevi++;
            if(brojacnabroevi==1) {
                break;
            }

        }


    }
    if(flag==false) {
        cout<<"NE"<<endl;
    }


    return 0;
}

