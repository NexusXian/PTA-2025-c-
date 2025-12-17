#include <stdio.h>
int main()
{
    char a[100];
    gets(a);
    int number = 0;
    for(int i = 0 ; a[i] != '\0' ; i++){
        if(a[i] >= '0' && a[i] <= '9'){
            number = number*10 + a[i] - '0';
        }
    }
    printf("%d\n",number);
    return 0;
}

