#include<stdio.h>
#include<string.h>
    int main()
    {
    int p,i,j=0,l,n,t;
        long long int k,q,w;
    char str[10][100000];
    scanf("%d",&n);
    getchar();
        for(i=0;i<n;i++)
        {
     //   printf("enter %d element of the arrayys",i);
        gets(str[i]);
        }

    for(i=0;i<n;i++)
    {
        char rev[100000]={0};
       k=strlen(str[i]);
     q=0;
       j=0;
        while(str[i][j]!='\0')
        {
        rev[q]=str[i][k-j-1];
        q++;
        j++;
        }
    rev[q]='\0';

    //printf("the new loop is ");
   // puts(rev);
    int x,y,count=0;
    for(w=0;w<k-1;w++)
    {
        x=abs(str[i][w+1]-str[i][w]);
        y=abs(rev[w]-rev[w+1]);
        if(x==y)

        {

            count++;
        }
    }
    if(count==k-1)
    {

        printf("Funny\n");
    }
    else
        printf("Not Funny\n");


   }
   }
    
