#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *f1,*f2;
    char ch,ch1;
    printf("Enter the contents");
    f1=fopen("input.txt","w");
    do{
        ch=getchar();
        fputc(ch,f1);
    }
    while(ch!='\n');
    fclose(f1);
    f1=fopen("input.txt","r");
    f2=fopen("output.txt","w");
    while((ch=getc(f1))!=EOF)
    {
        if(ch==' ' && ch==ch1)
         continue;
        
        putc(toupper(ch),f2);
        ch1=ch;
    }
    fclose(f1);
    fclose(f2);
}