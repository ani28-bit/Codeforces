#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i =0;i<n;i++){
        char s[101];
        cin>>s;

    if(strcmp(s,"Icosahedron")==0){
        count+=20;
    }
    if(strcmp(s,"Cube")==0){
        count+=6;
    }
    if(strcmp(s,"Tetrahedron")==0){
        count+=4;
    }
    if(strcmp(s,"Dodecahedron")==0){
        count+=12;
    }
    if(strcmp(s,"Octahedron")==0){
        count+=8;
    }

}

    cout<<count<<endl;
}