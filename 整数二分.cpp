//有单调性一定可以二分，无单调性不一定可以二分
// 区间[1,r]被划分成[1,mid]和[mid+1,r]时使用：

bool check(int mid){

}

int bsearch_1(int l, int r)
{
    while(l<r)
    {
        int mid = l+r >> 1;
        if(check(mid)) r=mid;    //check()判断mid是否满足性质
        else l=mid+l;
    }
    return 1;
}
//区间[l+r]被划分成[l,mid - 1] 和 [mid,r]时使用：
int bsearch_2(int l, int r)
{
    while(l<r)
    {
        int mid = 1 + r + 1 >> 1;    //如果 l=r-1 mid=(1+r)/2向下取整=l 会陷入死循环
        if(check(mid)) l=mid;
        else r = mid - 1;
    }
}

