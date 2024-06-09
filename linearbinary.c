
#include<stdio.h>
int linearSearch(int*arr,int size,int key){
for(int i=0;i<size;i++){
if(arr[i]==key){
return i;
}
}
return-1;
}
int binarySearch(int*arr,int size,int key){
int low=0;
int high=size-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==key){
return mid;
}else if(arr[mid]<key){
low=mid+1;
}else{
high=mid-1;
}
}
return-1;
}
int main(){
int arr[]={1,3,5,7,9};
int size=sizeof(arr)/sizeof(arr[0]);
int key=5;
int linearSearchResult=linearSearch(arr,size,key);
int binarySearchResult=binarySearch(arr,size,key);
if(linearSearchResult==-1){
printf("Element not found using linear search.\n");
}else{
printf("Element found at index %d using linear search.\n",linearSearchResult);
}
if(binarySearchResult==-1){
printf("Element not found using binary searc.\n");
}else{
printf("Element found at index %d using binary Search.\n",binarySearchResult);
}
return 0;
}
