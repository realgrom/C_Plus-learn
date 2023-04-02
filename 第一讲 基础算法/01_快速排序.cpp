#include<iostream>
using namespace std;
const int N = 1e6 + 10;
 int n;
 int q[N];

 void quick_sort(int q[],int l,int r)
 {  //l left 左指针 right 右指针
    if(l>=r)return;     //左右指针指向同一个位置,写l==r页可以，看个人习惯。

    int x=q[(l+r)/2],i=l-1,j=r+1;  //因为先无条件往内缩一格，所以为了接触真正的边界，要扩大一格
    while(i<j){
        do i++;while(q[i]<x);
        do j--;while(q[j]>x);
        if(i<j)swap(q[i],q[j]);
    }

    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
 }

 int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&q[i]);

    quick_sort(q,0,n-1);

    for(int i=0;i<n;i++) printf("%d ",q[i]);

    return 0;
 }



 