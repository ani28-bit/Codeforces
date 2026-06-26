#include<iostream>
using namespace std;

int main(){
    int a[5][5];
    int row = -1,col = -1;
    int i,j;

    for( i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);

            if(a[i][j]==1){
                row = i;
                col = j;

            }
        }
    }

    int moves = abs(row-2) + abs(col-2);
    cout<<moves<<endl;

}