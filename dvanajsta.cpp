#include <iostream>
using namespace std;
int main(){
   int number;
   int zeros=0, ones=0, twos=0, threes=0, fours=0;
   int counter=0;
   int numsaver, lastdigit, max=0;

   while(cin>>number) {
      int temp=number;
      counter=0;
      while(temp!=0) {
         lastdigit=temp%10;
         if(lastdigit>max) {
            max=lastdigit;
            numsaver=counter;
         }
         counter++;
         temp=temp/10;
      }
      lastdigit=0;
      max=0;

      if(numsaver==0) {
         zeros++;
      }
      else if(numsaver==1) {
        ones++;
      }
      else if(numsaver==2) {
         twos++;
      }
      else if(numsaver==3) {
         threes++;
      }
      else if(numsaver==4) {
         fours++;
      }
   }

   cout<<"0: "<<zeros<<endl;
   cout<<"1: "<<ones<<endl;
   cout<<"2: "<<twos<<endl;
   cout<<"3: "<<threes<<endl;
   cout<<"4: "<<fours<<endl;

















   return 0;
}