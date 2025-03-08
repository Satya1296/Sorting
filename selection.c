#include <stdio.h>

int main() {
    int n, i, j, index, temp;
    scanf("%d", &n);
    int a[n];
    
    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Selection Sort
    for(i = 0; i < n; i++) {
        index = i;
        
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[index]) {
                index = j;
            }
        }
        
        // Swap elements
        temp = a[index];
        a[index] = a[i];
        a[i] = temp;
    }
    
    // Print sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}

