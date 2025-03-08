#include<stdio.h>
void print_array_elements(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		}
		printf("\n");
}
void bubble_sort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		printf("Pass %d: ",i+1);
		print_array_elements(a,n);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Before sorting: ");
	print_array_elements(a,n);
	bubble_sort(a,n);
	printf("After sorting: ");
	print_array_elements(a,n);
	return 0;
}
