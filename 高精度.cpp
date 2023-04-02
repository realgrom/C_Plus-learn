// 1.大整数存储
// 2.

// A<=10 表示a的大小要小于10  length(A)小于十表示a的位数小于10 可取0~999999999
//问题版本
/* #include<stdio.h>
#include<string.h>

void change(char s[]){
    char temp[10];
    int i;
    for(i=0;i<strlen(s);i++)temp[i]=s[strlen(s)-i-1]; //'\0'
    for(i=0;i<strlen(s);i++)s[i]=temp[i];
    s[i]='\0';
}

int high_accuracy_plus(char s1[],char s2[],int s3[]){
    int i;
    change(s1);
    change(s2);
    puts(s1);
    puts(s2);
    int max=strlen(s1)>strlen(s2)?strlen(s1):strlen(s2);
    for( i=0;i<=max;i++){
        s3[i]=s1[i]-'0'+s2[i]-'0';
        if(s3[i]>=10){
             s3[i]-=10;
        }
    };
    if(s3[i]!=0)max++;
    return max;
}
int main()
{
    char s1[10]={0},s2[10]={0};
    int s3[20]={0};
    int i=0;
    int max;
    gets(s1);
    gets(s2);
    max=high_accuracy_plus(s1,s2,s3);
    for(int i=max-1;i>=0;i--)printf("%d",s3[i]);
    return 0;
} */
#include<iostream>
#include<vector>

using namespace std;
const int N = 1e6 + 10;

vector<int> add(vector<int> &A,vector<int> &B){
    vector<int> C;
    int t = 0;
    for(int i = 0;i< A.size() || B.size(); i++)
    {
        if(i<A.size())t +=A[i];
        if(i<B.size())t += B[i];
        C.push_back(t%10);
        t /= 10;  //12/10=1(大于十)，8/10=0(小于十)
    }
    if(t) C.push_back(1);   // 如果最高位还有进位，就在组尾再加一个一
    return C;
}
int main()
{
    string a,b;
    vector<int>A,B;

    cin >> a >> b;
    for(int i = a.size()-1;i >=0;i--)A.push_back(a[i]-'0');
    for(int i = b.size()-1;i >=0;i--)B.push_back(b[i]-'0');

    auto C = add(A,B);

    for(int i = C.size()-1;i >= 0;i --)printf("%d",C[i]);
    return 0;
}