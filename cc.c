#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n,c;
        scanf("%d%d",&n,&c);
        int x=n,a[n],b[n],sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }

        for(int i=0;i<n;i++){
            sum=sum+b[i];
        }
        int r=(c*x)-sum;

        if(r< 0){
            printf("0\n");
        }
        else{
            printf("%d\n",r);
        }

   
}


}