#include<Stdio.h>
int binarysearch(int array[],int x,int low,int high){
	if(high>low){
		int mid=(low+(high-low)/2);
		if(x==array[mid])
			return mid;
		if(x>array[mid])
			return binarysearch(array,x,mid-1,high);
		return binarysearch(array,x,low,mid-1);
	}
	return -1;
}
int main(){
	int array[]={10,20,30,40,50,55,60,75,90,100};
	int size=sizeof(array)/sizeof(array[2]);
	int x=50;
	int result = binarysearch(array,x,0,size-1);
	if(result==-1)
		printf("Not found");
	else
	    printf("Found at %d",result);
}



