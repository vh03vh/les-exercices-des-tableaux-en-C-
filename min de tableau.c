#include<stdio.h>
main()
{
	int t[10];
	int i,min;
	printf("veuillez les elements du tableau:\n");
	for(i=0;i<10;i++){
		printf("t[%d]= ",i);
		scanf("%d",&t[i]);
	}
min=t[0];
for(i=0;i<10;i++){

	if(min>t[i])
		min=t[i];
}
	printf("le minimum du tableau est:%d",min);
	return 0;
	
	
	
}
