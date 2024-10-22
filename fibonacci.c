#include <stdio.h>
#include <math.h>
int main(){
    
    int f1 = 0;
    int f2 = 1;
    int i;
    int fibo;
    int n;
    printf("voce deseja qual numero para seu fibonacci:");
    scanf("%d",& fibo);
    if(fibo<=0){
        printf("esse numero nao e permitido");
        return 0;
    }

    for(i=0;i<=fibo;i++){
        
    
    n = f1 + f2;   
    f1 = f2;
    f2 = n;
    
    printf("%d \n", n);
    if (f1==fibo){
        
        printf("\n o numero digitado esta no fibonacci");
        return 0;
    }
    else if(i==fibo){
        printf("\n o numero digitado nao esta no fibonacci");
    }
        
        

        
    }
   



    return 0;



}