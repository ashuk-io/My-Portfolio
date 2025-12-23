// #include <stdio.h>
// int main() {
// 	int i, n;
// 	int arr[] = {2,1,8,12,16,18};


// 	//printing array elements
// 	for(i=0; i<n; i++;){
		
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int main() {
//     int data[5] = {45,72,29,90,61};
//     int max = data[0];
//     for (int i = 1; i<5, i++;){
//         if(data[1] > max) {
//             max = data[1];
            
//         }
//     }
//     printf("Maximum = %d", max);
//         return 0;
// }
 
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("Reversed Array: ");
    for (int i = 4; i>=0; i--){
        printf("%d", arr[i]);
        
    }
    return 0;
}