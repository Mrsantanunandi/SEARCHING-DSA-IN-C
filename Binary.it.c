#include<stdio.h>
int binary_search(int a[],int low,int high,int item){
	int i,mid;
		mid=(low+high)/2;
		while(high>low){
	if(a[mid]==item)
	return mid;
	else if(a[mid]<item)
	return low=mid+1;
	else
	return high=mid-1;}
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
	int loc=binary_search(a,0,n-1,item);
	if(loc!=-1)
	printf("\nThe %d element is present at the index %d",item,loc);
	else
	printf("\nThe item is not in the array!");		

    return 0;}
