//Merge sort
#include<stdio.h>
void print_array(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void merge(int a[],int l,int m,int h){
	int k;
	int res[h-l+1];
	int i=l,j=m+1;k=0;
	while(i<=m && j<=h){
		if(a[i]<=a[j]) res[k++]=a[i++];
		else
		res[k++]=a[j++];
	}
	//Remaining  elements
	while(i<=m) res[k++]=a[i++];
	while(j<=h) res[k++]=a[j++];
	//Placing the elements back to the array
	for(i=l;i<=h;i++){
		a[i]=res[k];
		k++;
	}
}
void merge_sort(int a[],int l,int h){
	if(l<h){
		int m=(l+h)/2;
		merge_sort(a,l,m); // recursive part for the left side of array
		merge_sort(a,m+1,h); // recursive part for the right side of array
		merge(a,l,m,h); // merge two parts
	}
	
}
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Before sorting ");
	print_array(a,n); 
	merge_sort(a,0,n-1);
	printf("After sorting ");
	print_array(a,n);
	return 0;	
}
