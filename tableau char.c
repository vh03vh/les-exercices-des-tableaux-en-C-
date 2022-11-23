#include<stdio.h>
main()
{
	char t[6];
	int i;
	t[0]= 'A';
	t[1]= 'E';
	t[2]= 'U';
	t[3]= 'Y';
	t[4]= 'I';
	t[5]= 'O'; 
printf("les voyelles des francais sont:\n");
for(i=0 ; i<6 ; i++)
printf("%c\n",&t[i]);
return 0;
}
