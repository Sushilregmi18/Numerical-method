#include<stdio.h>
#include<conio.h>

int main(){
                
                int poly[10], m, a, i, b[10];
               
                printf("\n Enter the highest degree of the equation : ");
                scanf("%d",&m);

                for(i=0;i<=m;i++){
                                printf("\n Coefficient x[%d] = ", m-i);
                                scanf("%d",&poly[i]);
                }

                printf("\n Enter the value of constant in (x-a) : ");
                scanf("%d",&a);
                b[0] = poly[0];
                for(i=1;i<=m;i++){
                                b[i] = (b[i-1]*a)+poly[i];
                }

                printf("\n Coefficients of quotient are: \n");
                for(i=0;i<m;i++){
                                printf("\t%d",b[i]);
                }
                printf("\n Remainder is: %d", b[m]);
                printf("\n");
	 printf("\n");
	 printf("\n");
	 printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
	 printf("name:sushil regmi");
	 printf("roll:68");
getch();

}

