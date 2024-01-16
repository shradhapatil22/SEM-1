#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *fin,*fout;
    char ch,ch1;
    printf("Enter the contents");
    fin=fopen("input.txt","w");
    do{
        ch=getchar();
        fputc(ch,fin);
    }
    while(ch!='\n');
    fclose(fin);
    fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");
    while((ch=fgetc(fin))!=EOF)
    {
        if(isupper(ch))
        {
            fputc(tolower(ch),fout);
        }
        else{
            fputc(toupper(ch),fout);
        }
        ch=fgetc(fin);
    }
    fclose(fin);
    fclose(fout);
}