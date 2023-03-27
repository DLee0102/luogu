#include <iostream>
#include <bits/stdc++.h>

using namespace std;


//快速排序
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

//快速排序
void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
                j--;  
            if(i < j) 
                s[i++] = s[j];
            
            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
                i++;  
            if(i < j) 
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // 递归调用 
        quick_sort(s, i + 1, r);
    }
}

// void quickSort(int a[], int left, int right)
// {
    
//     if (left >= right)
//         return;
//     int i = left, j = right;
//     while (i < j)
//     {
//         // 若以左为枢轴变量，一定是先从右侧往前找，例如6 3 1 5 2 4 7
//         // https://juejin.cn/post/6844903917453574151
//         while (j > i && a[j] >= a[left])
//             j--;
//         while (i < j && a[i] <= a[left])
//             i++;
//         swap(a[i], (i == j) ? a[left] : a[j]);  //i和j相遇则与枢轴元素交换，否则a[i]与a[j]交换
//     }
//     quickSort(a, left, i-1);
//     quickSort(a, j+1, right);
// }

void quickSort(int a[], int left, int right);

int main()
{
    int n = 0;
    int a[10000];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    quick_sort(a, 0, n - 1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

    return 0;
}

void quickSort(int a[], int left, int right)
{
    if (left >= right)
        return;
    int l = left;
    int r = right;
    while(l < r)
    {
        while (r > l && a[r] >= a[left])
            r --;
        while (l < r && a[l] <= a[left])
            l ++;
        
        if (l == r)
        {
            swap(a[l], a[left]);
        }
        else
        {
            swap(a[l], a[r]);
        }
    }
    quickSort(a, left, l - 1);
    quickSort(a, l + 1, right);
}