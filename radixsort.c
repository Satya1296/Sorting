#include<stdio.h>
int get_max(int a[],int n){
	int i;
	int max=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	return max;
void print_array(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
  }
}
void radix_sort(int a[],int n){
	int m=get_max(a,n);
	// 2-dimensional array with 10rows and n columns
	int buckets[10][n];
	while(m){
		int e=1,i;
		int count[10]={0};
		//{0,0,0,0,0,0,0,0,0,0}
		//segregation of values in the array into the buckets
		for(i=0;i<n;i++){
			int pos=(a[i]/e)%10;
			buckets[pos][count[pos]]=a[i];
			count[pos]++;
		}
		//Reconstruction
		int c=0,j;
		for(i=0;i<10;i++){
			for(j=0;j<count[i];j++){
				a[c]=buckets[i][j];
				c+=1;
			}
		}
		e=e*10;
		m=m/10;
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	radix_sort(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
