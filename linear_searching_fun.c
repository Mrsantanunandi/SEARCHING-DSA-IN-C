#include<stdio.h>
int ls(int a[],int n,int item){
	int found=0,i;
	for(i=0;i<n;i++){
		if(a[i]==item)
		return i;
	}
	return -1;	
}
int main(){
	int i ,a[20],n,item;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);}
	printf("\nEnter the element you want to find:");
	scanf("%d",&item);
	int loc=ls(a,n,item);
	if(loc!=-1)
	printf("\nThe %d element is present at the index %d",item,loc);
	else
	printf("\nThe item is not in the array!");		

    return 0;}
