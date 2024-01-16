#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *fin,*fout;
    char ch,ch1;
    int i=0, l=0;
    printf("Enter the contents");
    fin=fopen("input.txt","w");
    do{
        ch=getchar();
        fputc(ch,fin);
    
        l++;
    }while(ch!='\n');
    l=l-1;
    fclose(fin);
    fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");
    for(i=0;i<l;i++)
    {
        while((ch=getc(fin[i]))!=EOF)
       {
           if(isupper(ch))
        {
            fputc(tolower(ch),fout);
        }
        else{
            fputc(toupper(ch),fout);
        }
        ch=fgetc(fin[i]);
        } 
    }
    fclose(fin);
    fclose(fout);
}