#include<stdio.h>
main()
{
	
	int	t[10];
	int i,max;
	printf("veuillez les elements du tableau est:\n");
	for(i=0;i<10;i++){
		
		printf("t[%d]= ",i);
		scanf("%d",&t[i]);
	}
max=t[0];
 	for(i=0;i<10;i++)
	 {
	 	if(max<t[i])
	 	max=t[i];
		 }	
printf("le meximum du tableau est:%d\n",max);
		 
	
return 0;	
}
