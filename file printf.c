#include <stdio.h>

int main()
{
    FILE * fp;
    FILE *fp1;
    char s[20];
    char buff[255];
    //write using fprintf
    if((fp=fopen("abc.txt","w"))!=NULL)
    {
        fprintf(fp,"%s","Introduction\n");
        fprintf(fp,"%s","To\n");
        fprintf(fp,"%s","Computing\n");
        fclose(fp);
    }
    else 
         printf("Unable to open file.");
         
         fp1=fopen("abc.txt","r");
         while(fscanf(fp1,"%s",buff)!=EOF){
             printf("%s",buff);
         }


	return 0;


}
