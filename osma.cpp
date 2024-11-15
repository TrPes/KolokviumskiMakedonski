#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    int cifraN=0,cifraX=0, maxRazl = 0;
    for(int i=n-1;i>=0;i--)
    {
        int temp=i;
        int tempX=x;
        while(temp>0) {
            cifraN = temp % 10;
            cifraX = tempX % 10;
            if (cifraX == cifraN){
                break;
            }
            
         tempX /= 10;
         if(tempX==0){
          tempX=x;
         temp/=10;  
            }
        }
        if(temp==0){
            maxRazl=i;
            break;
        }
    }
    cout<<maxRazl;
    return 0;
}
