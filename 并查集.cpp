/* 
并查集：
1.将两个集合合并
2.询问两个元素是否在一个集合中

基本原理：每个集合用一颗树表示。树根的编号就是整个集合的编号。每个节点存储它的父节点，p[x]表示x的父节点。

问题1：如何判断树根：if(p[x] == x)父节点等于自己，相当于没有父节点
问题2： 如何求x的集合编号：while(p[x]!=x) x=p[x];
问题3：如何合并两个集合：px是x的编号，py是y的编号。p[x]=y;
优化：路径压缩
近乎O(1)
*/
#include<iostream>

using namespace std;

const int N =10010;

int n,m;
int p[N];  

int find(int x) // 返回x的祖宗节点+路径压缩
{
    if(p[x] !=x) p[x] = find(p[x]);
    return p[x];
}

int main(){
    scanf("%d%d",&n,&m);

    for(int i = 1;i <= n;i ++) p[i]=i;

    while(m--){
        char op[2]; //用字符串读一个字母建议用字符串形式，一个打话有可能读空格和其他奇怪的字符
        int a,b;
        scanf("%s%d%d",op,&a,&b);

        if (op[0] == 'M') p[find(a)] = find(b);  //让a的祖宗节点的父亲等于b的祖宗节点
        else{
            if(find(a)==find(b)) puts("Yes");
            else puts("No");
        }
    }

    return 0;
}