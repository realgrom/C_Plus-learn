//Trie:高效的存储和查找字符串集合的数据结构
#include<iostream>
 
 using namespace std;

 const int N = 10010;
// cnt:以当前这个单词结尾
 int son[N][26],cnt[N],idx; //idx当前用到的节点 下标是0的点既是根节点，又是空节点
 char str[N];

 void insert(char str[])
 {
    int p = 0;
    for(int i=0;str[i];i++)    //字符串结尾是/0，可以用这个来判断是否走到结尾
    {
        int u = str[i] - 'a';  
        if (!son[p][u])  son[p][u] == ++ idx;
        p = son[p][u];        //当前节点变为子节点
        }
    cnt[p] ++ ;
 }

 int query(char str[])
 {
    int p = 0;
    for(int i = 0;str[i];i ++)
    {
        int u = str[i] - 'a';
        if(!son[p][u]) return 0;
        p=son[p][u];
    }
    return cnt[p];
 }

 int main(){
    int n;
    scanf("%d",&n);
    while(n --)
    {
        char op[2];
        scanf("%s%s",op,str);
        if(op[0] == 'I') insert(str);
        else printf("%d\n",query(str));
    }

    return 0;
 }
