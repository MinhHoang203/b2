#include<stdio.h>
  int main(){
  	
  	int n,i,j ;
	  printf("nhap phan tu cua mang");
	  scanf("%d",&n);
	  
	  int arr[100]; 
	  printf("nhap phan tu cua mang");
	  scanf("%d",&arr[i]);
	  
	  for (int i = 0,j = n - 1; i < j ; i++,j--){
	  	int temp=arr[j];
		  arr[i]=arr[j];
		  arr[j]=temp;
		   
	  }  
	    printf ("in ra mang dao nguoc\n");
	    for( i = 0; i<n ;i++){
	  	printf ("%d",arr[i]);
	  } 
	   
  }  
