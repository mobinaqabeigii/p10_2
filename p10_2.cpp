#include<iostream>
using namespace std;

int tavan (int x, int y) {
     if (y>1)
      x=(x*tavan(x,y-1));
   return x;
}
int main (){
   int x,y,hasel;
  cout<<"enter x&y:";
 cin>>x>>y;
hasel=tavan(x,y);
  cout<<"hasel:"<<hasel;
}