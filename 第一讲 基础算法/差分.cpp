// a1,a2,a3.....an
// 构造 b1,b2,b3....bn
// 使得 ai=b1+b2+b3+......+bn

// b1=a1
// b2=a2-a1
// b3=a3-a2 
// bn=an-an-1
// 差分的作用：只要对b数组求一遍前缀和
/* #include<iostream>

using namespace std;

const int N = 1e6 + 10;
int a[N],b[N];
int n,m;

int main(){
    
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i]-a[i-1];
    }
    
    while(m--){
        int l,r,c;
        scanf("%d%d%d",&l,&r,&c);
        b[l]+=c;b[r+1]-=c;
    }
    
    for(int i=1;i<=n;i++)
        a[i]=a[i-1]+b[i];
    
    for(int i =1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
    
} */
// y总解法
#include<iostream>
using namespace std;

const int N = 100010;

int n,m;
int a[N],b[N];

void insert(int l, int r,int c)
{
    b[l] +=c;
    b[r+1] -=c;
}

int main()
{
    scanf("%d%d",n,m);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);

    for(int i=1;i<=n;i++)insert(i,i,a[i]);      //b[1]=b[1]+a[1] b[2]=b[2](0)-a[1]=-a[1] //b[2]=b[2]+a[2](a[2]-a[1]) b[3]=b[3]-a[2]
    //相当于每一个b[i]都等于a[i]-a[i-1]
    // A 0000000
    // B 0000000
    // 然后
    // A 1000000
    // B 1 -1 0 0 0 0
    // A仍然是B的前缀和

    // 然后 A再多一个数
    // A 1 2 0000
    // B 1 1 -1 000
    // A仍然是B的前缀和`
    while(m--)
    {
        int l,r,c;
        scanf("%d%d%d",&l,&r,&c);
        insert(l,r,c);
    }

    for(int i=1;i<=n;i++)b[i]+=b[i-1];   //把b[i]变成前缀和

    for(int i=1;i<=n;i++)printf("%d ",b[i]);
    
    return 0;
}