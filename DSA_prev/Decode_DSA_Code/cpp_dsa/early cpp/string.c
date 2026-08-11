#include <stdio.h>
int main()
{

   /* char arr[5]={'r','r','d','w','q'};
    int i=0;

    char ptr[17]="physics allowed";
    while(ptr[i]!='\0'){
        printf("%c ",ptr[i]);
    i++;
    }
    printf("%d",i);
    printf("%s",ptr);*/
   // puts("Hello world");
   char str[23];
   //scanf("%s",str);
  // gets(str);
  scanf("%[^\n]s",str);
   puts(str);
}
