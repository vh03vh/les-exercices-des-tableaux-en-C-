#include<stdio.h>
main()
{
	int t[10];
	int n,i,x;
	printf("veulliez les elements du tableau:\n");
	for(i=0;i<10;i++){
		printf("t[%d]= ",i);
		scanf("%d",&t[i]);
	}
	printf("veulliez le valeur de n:");
	scanf("%d",&n);
	x=0;
		for(i=0;i<10;i++){
		if(t[i]==n)
		x++;
		}
		printf("le nomber d occurence de %d dans tableau est:%d",n,x);
	
	
	
	
	
}
