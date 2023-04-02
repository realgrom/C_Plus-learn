#include<iostream>
using namespace std;
const int N=100010;

// head 表示头结点的下标
// e[i]表示节点i的值
//ne[i]表示节点的next指针是什么
//idx存储当前已经用到了哪个点
int head,e[N],ne[N],idx;

// 初始化
void init(){
     head=-1;
     idx=0;
}
// 将x插入到头节点
void add_to_head(int x){
    e[idx]=x;
    ne[idx]=head;           //当前节点的next指针指向head指向的地址
    head=idx;               //让head指向idx(地址)
    idx++;                  //这个节点已经被用过了，移动到下一个地址
}

// 将x插到k节点的后面
void add(int k,int x){
    e[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx;
    idx++;
}

// 将下标是k的点后面的点删掉
void remove(int k){
    ne[k]=ne[ne[k]];
}

int main(){
    
}



