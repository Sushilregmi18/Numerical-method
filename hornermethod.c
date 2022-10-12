#include <stdio.h>
#include <conio.h>

void main()
{

   

 float a[6],    b[6],x;
 
 int i,n;
  printf("\n Enter the highest degree of the equation : ");
  scanf("%d", &n);

   for (i = n; i >=0; i--)
  {
    printf("\n Coefficient a[%d] = ", i);
    scanf("%f", &a[i]);

  }

  printf("Enter the value of x at which we need to find the functional value of x : ");
  scanf("%f",&x);

   b[n]=a[n];

  while(n>0){
    b[n-1]=a[n-1]+ b[n]* x;

    n--;

  }
 printf("\nThe value of the polynomial at x=%.2f is:  %.3f \n\n",x,b[0]);


	printf("\n");
	 printf("\n");
	 printf("\n");
	 printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
	 printf("name:sushil regmi");
	 printf("\t\t\troll:68");
	 getch();
	 return 0;
}
