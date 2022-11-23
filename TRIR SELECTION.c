#include<stdio.h>
#include<stdlib.h> 
void tri_selection(int t[], int n){

 int min,temp;   
  for(int i = 0 ; i < n-1 ; i++)  
   {         min = i; 
	for(int j = i+1 ; j < n ; j++)    
         if(t[j] < t[min])
	min = j;         
	 if(min!=i)       
 	 {            //échanger t[i] et t[min]    
        temp = t[i];    
        t[i]=t[min];  
          t[min]=temp;               
    }
 }   
  } 
  
main()
{
 int T[10]={5,2,126,9,51,7,1,6,12,24};  
    tri_selection(T,10);
 for (int i=0 ; i< 10 ; i++)    
  printf("%d ",T[i]);
      system("pause");
}
                


