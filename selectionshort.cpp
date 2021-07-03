/* writing selection short algo */
#include<iostream>
using namespace std;
int printshort(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }cout<<endl;
}
int selectionshort(int array[],int len){
    for(int i=0;i<len;i++){
        int min=i;
        for(int j=i+1;j<len;j++){
            if(array[j]<array[min]){
                
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
}
int main(){
    int array[]={9,4,7,2,6,1,8,5,11,22,10,13};
    int len=sizeof(array)/sizeof(array[0]);
    selectionshort(array,len);
    printshort(array,len);
}