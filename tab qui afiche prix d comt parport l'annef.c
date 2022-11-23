#include<stdio.h>
main()
{
	float c[20];
	int i;
	float s;
	printf("veuillez les elements du tableau:\n");
	s=1000;
	for(i=0;i<20;i++){
	
	
		s=s+s*0.02;
		c[i]=s;
	}
for(i=0;i<20;i++)
printf("l anniversaire %d la somme de compte mohamed est:%f\n ",i+1,c[i]);	
	
	
	
	
}
