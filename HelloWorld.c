#include <stdio.h>
int f(int);
int f(int n){
    static int i=1;
        if(n>=5){
            return n;
        }
    else{
        n = n+i;
        i++;
        return f(n); 
    }
}
int main(){
    printf("%d",f(1));
    return 0;
}
