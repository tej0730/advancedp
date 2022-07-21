#include <stdio.h>

int main()
{
	FILE *fp;
	int ch,no=0,nlines=0;
	
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
	    printf("can not opne file\n");
	}
	
	ch=getc(fp);
	while(ch!=EOF)
	{
	    if(ch=='\n')
	    nlines++;
	    no++;
	    ch=getc(fp);
	    
	}
	fclose(fp);
	if(no!=0)
	{
	    printf("There are %d characters:\n",no);
	    printf("There are %d lines\n",nlines);
	    
	}
	else
	    printf("File is empty\n");
	    return 0;
}
