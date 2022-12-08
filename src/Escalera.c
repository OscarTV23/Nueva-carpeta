#include <stdio.h>

int main()
{
    int c=0, f=0, escalones=0;

	printf("Numero de escalones: ");
    scanf("%d",&escalones);

    for (c = 1; c <= escalones; c++)
    {
        for(f = 1; f <= escalones; f++){
            if ((f%2==0)&&(c==f))
            {
                printf("|_+_");
            }
            else if ((c%2==1)&&(c==f))
            {
               printf("|_-_");
            }
            else if ((c!=f))
                printf("    ");

        }
        
        printf("\n");
    }
    return 0;
}

