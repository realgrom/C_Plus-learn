// #include<iostream>
// #include<vector>
// using namespace std;
// vector<数据类型> 名称;
// 比如：vector<int>vec;
// 这行代码的意思是定义一个叫vec的int类型的动态数组
// 用push.back(元素)可以在动态数组最后插入一个新的元素，比如：vec.push_back(2);//目前：[1]调用后：[1,2]
// pop_back()c=删除动态数组中的最后一个元素
// 访问动态数组的长度用 数组名称.size() 比如 vec.size();
// 访问动态数组中某个元素跟普通数组访问方式一样 比如：vec[0] 但是需要注意不要超过数组大小范围 动态数组大小范围为 vec.size()-1
// 输出一个动态数组里的所有数据像这样：
//     vector<int>vec;
//     for(int i=0;i<vex.size();i++){
//         cout << vec[i] << " ";
//     }
// 如果你想修改动态数组中的某个值也跟普通数组一样：vec[0]=2
// 动态数组清空所有数据且释放内存格式为： vector<数据类型>().swap(名称) 比如：vector<int>.swap(vec);
// 你也可以使用 名称.empty()来检测这个动态数组的大小是否为0
// 动态数组可以整体赋值比如：vec2=vec1;
// 动态数组的排序需要使用迭代器
//  如果全排序则像这样：sort(vec.begin(),vec.end());
// 如排序前面3数则像这样
// sort(vec.begin(),vec.begin()+3);

// struct Stu{
//     string name;
//     int score;
// };
// int main(){
//     vector<Stu>vec;
// }
// 想将动态数组初始化一个数或数组大小 这样：vector<数组类型>数组名(大小,值)
// int main(){
//     vector<int>vec(100,0);
//     设置大小为100且所有数为0的动态数组
// }