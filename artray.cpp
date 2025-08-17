#include <iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int target){
    
    int mid = (s+e)/2;
    if(s>e){
        return -1;
    }else if(arr[mid]== target){
        return mid;
    }else if(target<arr[mid]){
        return binarysearch(arr,s,mid,target);
    }else if(target>arr[mid]){
        return binarysearch(arr,mid+1,e,target);
    }
    return -1;
}
int main(){
    int arr[]={90,32,12,43,56,73};
    int target;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<"Enter the element you want to search : ";
    cin >>target;
    int r = binarysearch(arr,0,n-1,target);
    
    if( r == -1){
        cout <<"Element not found !";
    }else{
        cout <<"Element found at "<<r+1<<" th "<<"position";
    }
}