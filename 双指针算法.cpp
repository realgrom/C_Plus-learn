// for(int i=0,j=0;i<n;i++)
// {
//  while(j<i&&check(i,j))j++;
    
//     每道题的具体逻辑
// }
//双指针最简单的应用：输出单词
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[1000];
    
    gets(str);
    int n =strlen(str);
    for(int i = 0;i<n;i++)
    {
        int j = i;
        while(j<n&&str[j]!=' ')j++;
        for(int k=i;k<j;k++)printf("%c",str[k]);
        cout << endl;
        i=j;
    }
    return 0;
}
