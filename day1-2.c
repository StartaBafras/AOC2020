#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *dosya = fopen("d1.txt","r");
    int b[200];
    long int i=0;
    while(!feof(dosya))
    {
            fscanf(dosya,"%d",&b[i]);
            i+=1;  
    }

    for(int j =0;j<200;j++)
    {
        for(int k=0;k<200;k++)
        {

            for(i=0;i<200;i++)
            {
                
                if (b[j] + b[i] + b[k]== 2020)
                {
                    printf("%d \n",b[j]*b[i]*b[k]);
                }

            }

        }
    }


}