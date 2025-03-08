#include<stdio.h>
void print_array(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void insertion_sort(int a[],int n){
	int i,j;
	for(i=1;i<n;i++){
		j=i-1;
		int key=a[i];
		while(j>=0 && a[j]>key){ //shift the element to right to make space
			a[j+1]=a[j];
			j--;
			print_array(a,n); // Decrement j to keep on comparing with elements on left
		}
		a[j+1]=key;
	}
}
int main(){
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
insertion_sort(a,n);
for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
return 0;
}

