//Rhoger Gabriel Sousa farias


#include<stdio.h>
#include<stdlib.h>


int main()
{
   int *p;
   int qt, n, i, j, aux;






   while (qt != 0)
   {
      printf("\nTamanho do Vetor: ");
      scanf("%d", &n);
      p = (int*)calloc(n, sizeof(int));


     
      for (i = 0; i < n; i++)
      {
         printf("%d/%d: ", i+1, n);
         scanf("%d", (p+i));
      }


      for (i = 0; i < n-1; i++)
      {
         for (j = i+1; j < n; j++)
         {
            if (p[i] > p[j])
            {
               aux = p[i];
               p[i] = p[j];
               p[j] = aux;
             }
         }
       }


       for (i = 0; i < n; i++)
       {
          printf("%d ", p[i]);
       }


       printf("\n");


       free(p);


       qt--;


   }


}

