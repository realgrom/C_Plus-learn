#include<iostream>

using namespace std;

const int N = 10000010;

int  n;
int q[N],tmp[N]; //tmp是辅助数组

void merge_sort(int q[],int l,int r){
    if(l >= r) return;      
    int mid =(l+r)/2; 
    //(l+r)/2
    
    merge_sort(q,l,mid),merge_sort(q,mid+1,r);
    
    int k = 0,i = l, j =  mid + 1;
    while(i <= mid && j<= r)
        if(q[i] <= q[j])tmp[k++]=q[i++];
            else        tmp[k++]=q[j++];
    while(i<=mid)   tmp[k++]=q[i++];
    while(j<=r)     tmp[k++]=q[j++];
    //将tmp中的内容复制到k里面去
    for(i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
}

int main(){
    
    scanf("%d",&n);
    for(int i = 0;i < n;i ++) scanf("%d",&q[i]);
    
    merge_sort(q,0,n-1);
    
    for(int i = 0;i < n;i ++) printf("%d ",q[i]);
    return 0;
}