#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

while( n != 1){
    if(n%2 != 0){
        n = (3*n) + 1;
        printf("%d ", n);
    }else{
        n /= 2;
        printf("%d ", n);
    }

}
    return 0;
}
