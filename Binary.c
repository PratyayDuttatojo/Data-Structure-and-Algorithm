#include<stdio.h>
int binary(int array[], int x, int low, int high){
    if(high>=low){
        int mid=low+((high-low)/2);
        if(x==array[mid])
           return mid;
        if(x>array[mid])
           return binary(array,x,mid+1,high);
        return binary(array,x,low, mid-1);
    }
    return -1;
}
int main(){
    int array[]={10,15,20,25,30,35,40,45,50,55,60};
    int n = sizeof(array)/sizeof(array[2]);
    int x = 45;
    int result = binary(array,x,0,n-1);
    if (result == -1){
        printf("Not found");
    }
    else{
        printf("Found at %d", result);
        
    }
}

