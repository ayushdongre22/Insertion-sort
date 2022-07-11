#include<iostream>
using namespace std;
void sort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>=0){
            if(*(arr+j)>*(arr+j+1)){
                int c=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=c;
            }
            else{break;}
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    sort(arr,n);
    for(int i=0;i<n;i++){cout<<arr[i]<<endl;}
    return 0;
}