#include<stdio.h>

int main()
{
	int l;
	do{
	scanf("%d",&l);
	}while(l>9||l<1);
	
if(l==1)
	printf("\none");
if(l==2)
	printf("\ntwo");
if(l==3)
	printf("\nthree");
if(l==4)
	printf("\nfour");
if(l==5)
	printf("\nfive");
if(l==6)
	printf("\nsix");
if(l==7)
	printf("\nseven");
if(l==8)
	printf("\neight");
if(l==9)
	printf("\nnine");

return 0;

}
