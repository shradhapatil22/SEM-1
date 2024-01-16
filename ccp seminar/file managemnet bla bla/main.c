#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *f1,*f2;
    char ch,ch1;
    printf("Enter the contents");
    f1=fopen("E:\input trail.txt","w");
    do{
        ch=getchar();
        fputc(ch,f1);
    }while(ch!='\n');
    fclose(f1);
    f1=fopen("E:\input trail.txt","r");
    f2=fopen("oE:\output.txt","w");
    while((ch=getc(f1))!=EOF)
    {
        if(isupper(ch))
        {
            fputc(tolower(ch),f2);
        }
        else{
            fputc(toupper(ch),f2);
        }
    }
    fclose(f1);
    fclose(f2);
}
