#include<iostream>
using namespace std;

int main(){
    int p,q,r,s,a,b,c,max;
      cin>>p>>q>>r>>s;

      if(p>q && p>r && p>s){
           max=p;
           a=p-q;
           b=p-r;
           c=p-(a+b);
      }
       else if(q>p && q>r && q>s){
           max=q;
           a=q-p;
           b=q-r;
           c=q-(a+b);
      }
       else if(r>p && r>q && r>s){
            max=r;
            a=r-q;
            b=r-p;
            c=r-(a+b);
      }
      else if(s>q && s>r && s>p){
            max=s;
            a=s-q;
            b=s-r;
            c=s-(a+b);
      }


      cout<<a<<" "<<b<<" "<<c<<" ";
}