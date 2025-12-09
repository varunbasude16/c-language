#include<stdio.h>
int i,j;
void ls(int* a, int n,int  g ){
	for (i=0;i<n;i++)
	if(g==*(a+i)){
		
		printf("found at position %d\n\n\n",i+1);
		break;
	}
	if(i==n)
	printf("not found");
	
}
void main()
{
	int a[100],n,g,flag=0;
	printf("enter  number of elements :");
	scanf("%d",&n);
	printf ("Enter elements: \n");
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	while(g!=-1){
	
	printf("\nenter key(-1 to stop searhing ):");
	scanf("%d",&g);
	ls(a,n,g);
	
	
	}
}

