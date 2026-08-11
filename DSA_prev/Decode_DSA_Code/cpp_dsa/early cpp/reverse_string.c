#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    puts("Enter a string");
    gets(str);
    int i=0;
    while(str[i]!=0){
        i++;
    }
    printf("%d",i);
    for(int j=0,k=i-1;j<=k;j++,k--){
        char temp=str[j];
        str[j]=str[k];
        str[k]=temp;
    }
    puts("The reverse str is: ");
    puts(str);
}
