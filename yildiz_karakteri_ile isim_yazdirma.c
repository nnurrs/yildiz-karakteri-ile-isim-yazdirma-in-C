#include <stdio.h>
#include <stdlib.h>

int satir,sutun,boyut,i,j;
 void nharfinibas(int harf)
 {
     for(satir=1;satir<=boyut;satir++)
     {
         if(satir==1)
         {
             for(sutun=1;sutun<=boyut;sutun++)
              {printf("*");}
              printf("\n");
              continue;
         }
         for(sutun=1;sutun<=boyut;sutun++)

             if(sutun==1 || sutun==boyut)
             {printf("*");}
             else
             {printf(" ");}
             printf("\n");
} printf("\n\n");
 }

 void Uharfinibas( int harf)
{
    for (satir=1;satir<=boyut;satir++)
    {
        if (satir==boyut)
        {
            for(sutun=1;sutun<=boyut;sutun++)
                {printf("*");}
                printf("\n");
                 continue;
        }
        for(sutun=1;sutun<=boyut;sutun++)

            if(sutun==1 || sutun==boyut)
              {printf("*");}
            else
             {printf(" ");}
             printf("\n");
    } printf("\n\n");
    }

void Rharfinibas(int harf)
{
	int k;
	k= boyut-(boyut/2);

  for (satir=1;satir<=k;satir++)
    {
        if (satir==1 || satir==boyut || satir==k)
        {
            for(sutun=1;sutun<=boyut;sutun++)
                {printf("*");}
                printf("\n");
                 continue;
        }
        for(sutun=1;sutun<=boyut;sutun++)

            if(sutun==1 || sutun==boyut)
              {printf("*"); }
            else
             {printf(" ");}
             printf("\n");
    }

 for(i=1;i<k;i++)
{
    for(j=1; j<=i; j++)
    {
      if(j==1 || j==i)
        {printf("*");}
        else
        {printf(" ");}
    }
    printf("\n");
} printf("\n\n\n\n");
}

void Sharfinibas(int harf)
{
    for(satir=1; satir<=boyut; satir++)
    {
        if(satir==1||satir==boyut|| satir==(boyut+1)/2)
        {
            for(sutun=1; sutun<=boyut; sutun++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            if(satir<(boyut+1)/2)
            {
                printf("*");
                printf("\n");
            }
            else
            {
                for(sutun=1; sutun<=boyut-1; sutun++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
        }
    }
    printf("\n\n\n");
}

void Aharfinibas(int harf)
 {
     for(satir=1;satir<=boyut;satir++)
     {
         if(satir==1 || satir==boyut/2)
         {
             for(sutun=1;sutun<=boyut;sutun++)

                 {printf("*");}
                 printf("\n");
                continue;
         }
         for(sutun=1;sutun<=boyut;sutun++)
            if(sutun==1 || sutun==boyut)
              {printf("*");}
            else
            {printf(" ");}
            printf("\n");
    } printf("\n\n");
 }

void Gharfinibas(int harf)
 {
     for(satir=1;satir<=boyut;satir++)
 {
     if(satir==1 || satir==boyut/2+1 || satir==boyut)
     {
         for(sutun=1;sutun<=boyut;sutun++)
         {
             printf("*");

         }
         printf("\n");
     }
     else
     {
         if(satir<boyut/2+1)
         {
             printf("*");
             printf("\n");
         }
         else
         {
             printf("*");
             for(sutun=1;sutun<=boyut-2;sutun++)
             {
                 printf(" ");
             }
             printf("*");
             printf("\n");
         }
     }
 }
 printf("\n\n");
 }

void Lharfinibas(int harf)
{
    for(satir=1;satir<=boyut;satir++)
    {
        if(satir==boyut)
        {
            for(sutun=1;sutun<=boyut;sutun++)
            {printf("*");}
            printf("\n");
           continue;
        }
        for(sutun=1;sutun<=boyut;sutun++)
            if(sutun==1)
        {printf("*");}
        else
        {printf(" ");}
        printf("\n");
    } printf("\n\n");
}

void mharfinibas(int harf)
 {
     for(satir=1;satir<=boyut;satir++)
     {
         if(satir==1)
         {
             for(sutun=1;sutun<=boyut;sutun++)

                 {printf("*");}
                 printf("\n");
         }
         for(sutun=1;sutun<=boyut;sutun++)

            if(sutun==1 || sutun==boyut || sutun==boyut/2+1)
              {printf("*");}
            else
            {printf(" ");}
            printf("\n");
    }
 }

 int main()
 { printf("lutfen tek tam sayili ve 6'dan buyuk bir boyut degeri giriniz: ");
 scanf("%d",&boyut);
     int n;
     nharfinibas(n);
     Uharfinibas(n);
     Rharfinibas(n);
     Sharfinibas(n);
     Aharfinibas(n);
     Gharfinibas(n);
     Lharfinibas(n);
     Aharfinibas(n);
     mharfinibas(n);

     return 0;
 }
