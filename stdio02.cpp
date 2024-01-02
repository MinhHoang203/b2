
#include<stdio.h>
int main(){

int n ;
printf("nhap kich thuong mang");
scanf("%d",&n);
int arr[n];

printf("nhap gia tri cho mang");
for (int i=0;i < n ;i++){
printf ("arr[%d]=",i);
scanf ("%d",&arr[i]);
}

int arr2[n];
for(int i=0;i<n;i++){

int m=0;
for(int j=0;j<n;j++){

if(arr[i]==arr[j]);
	m++; 
} 
}
  if(m>max){
  	max=m;
	   
  } 
  printf("danh sach xuat hien nhieu nhat:\n ");
  for(int i=0;j<n;i++){
  	if(arr2[i]==max){
  		printf("%d\t",arr[i]); 
	  } 
  }
   
   
}
