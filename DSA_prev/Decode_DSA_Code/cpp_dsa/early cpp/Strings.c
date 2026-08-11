#include <stdio.h>
#include <string.h>
/*int main(){
char arr[]={'f','f','d','e','w','\0'};
char ch='\0';
int i=0;
while(arr[i]!="\0"){
    printf("%c",arr[i]);
    i++;
}
}*/

/*int main()
{
    char arr[]="hello";
    int i=0;
    while( arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;

    }
    printf("%d",i);
}*/

int  main(){
char str[]="College wallah is new channel";
puts(str);
printf("%s",str);
char str1[45];
//scanf("%s",str1);//bass ek word as a input lega
//gets(str1);//entire sentence as a input
scanf("%[^\n]s",str1);//works same as gets
printf("%s",str1);
}
