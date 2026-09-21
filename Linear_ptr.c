#include<stdio.h>
int linearSearch(int arr[], int n, int key) {
	int i;
	for(i=0;i<5;i++){
		if(*(arr +i)==key){
			return i;
		}
	}
return -1;
}
int main(){
	int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 6;
    int key = 50;
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }

}
