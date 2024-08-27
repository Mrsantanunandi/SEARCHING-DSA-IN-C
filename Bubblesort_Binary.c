#include<stdio.h>
void bubble_sort(int a[],int n){
	int i,j,temp;
    for(i=0;i<n-1;i++){
    	for(j=0;j<n-1-i;j++){
    		if(a[j+1]<a[j]){
    			temp=a[j+1];
    			a[j+1]=a[j];
    			a[j]=temp;}
			}
		}
	}
int binary_search(int a[],int low,int high,int item){
	int i,mid;
		mid=(low+high)/2;
	if(high>low){
	if(a[mid]==item)
	return mid;
	else if(a[mid]<item)
	return binary_search(a,mid+1,high,item);
	else
	return binary_search(a,low,mid-1,item);}
	else
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
	bubble_sort(a,n);
	int loc=binary_search(a,0,n-1,item);
	if(loc!=-1){
		for(i=0;i<n;i++){
			if(a[i]==item)
	printf("\nThe %d element is present at the index %d",item,i);}}
	else
	printf("\nThe item is not in the array!");		

    return 0;}
