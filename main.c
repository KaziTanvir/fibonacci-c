#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
   char str[n];
   printf("Enter the value of n: ");
   scanf("%d",&n);
   for(int i =0; i<n; i++){
    scanf("%s", &str);
   }
   for(int i =0; i<n; i++){
    printf("%s", str);
   }
return 0;
}
