#include<stdio.h>
main() {
	int te[6],ts[6];
	int i;
	printf("veuillez les elements des tableau:\n");

	for(i=0; i<6; i++) {
		printf("te[%d]= ",i);
		scanf("%d",&te[i]);

	}
	for(i=0; i<6; i++) {

		ts[5-i]=te[i];
		printf("les elements inverse sont:\n");
	}

	for(i=0; i<6; i++)
		printf("ts[%d]= %d\n",i,ts[i]);




}
