#include <stdio.h>

int main() {
   int a[100][100];
   int b[100][100];
   int c[100][100];
   int n,i,j;
   printf("Unesite velicinu matrice:");
   scanf("%d", &n);
   printf("Unesite matricu a:\n");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           scanf("%d", &a[i][j]);
       }
   }
   printf("Unesite matricu b:\n");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           scanf("%d", &b[i][j]);
       }
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           c[i][j]=a[i][j]+b[i][j];
       }
   }
   printf("Matrica c:\n");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           printf("%d ", c[i][j]);
       }
       printf("\n");
   }
}
