#include<stdio.h>
main()
{
	int t[10];
	int x,n,i;
	printf("veuillez les elements des tableau:\n");
	for(i=0;i<10;i++){
		printf("t[%d]= ",i);
		scanf("%d",&t[i]);
	}
	printf("veuillez le valeur n:\n");
	scanf("%d",&n);
	x=0;
	for(i=0;i<10;i++)
	{
		if(t[i]==n)
		x++;
	}
	printf("le nomber d occurence de %d dans tableau est:%d \n",n, x);
	
		if(x==0)
		printf("%d ne se trouve PAS dans le tableau",n);	
	else

	printf("%d se trouve dans le tableau",n);
	
	
	return 0;
	
	
	
}
