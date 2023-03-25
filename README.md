# luogu

- **c++常用库**:  
    ```cpp
    #include <iostream> 
    #include <iomainp> 
    #include <string>
    #include <bits/stdc++.h> // 万能库
    #include <cmath> //数学运算
    ```
<br/>

## 关于输入输出
-  首先说明基本输入输入输出方法，再说明C风格和Cpp风格字符串的区别。常用的输入输出为: `cin >> `、`cin.get()`、`cin.getline()`、`cin.clear()`、`cout <<`、`cout.setf()`、`cout.precision()`、`ios_base::fixed`、`cout.width()`
   - `cin >>` 最简单的一种输入方式，特点是对于接受输入的变量可以看碟下菜，以空格、回车为间隔符，读入时直接忽略间隔符并保留在缓存区。`cin >> `的返回值是检查输入和变量类型是否匹配的布尔值，故有此种用法`while(cin >> input)`当跳出while时cin的流状态至少有一项被置为false，后续若要继续调用 `cin` 则需进行更复杂的操作（详见书p615）;
   - `cin.get()` 可以读取一个输入的字符，特点是可读入任何字符（包括回车和空格，故可用于while循环判断输入是否结束）；有两种基本使用格式：`ch = cin.get()`(将输入转换成整型)、`cin.get(ch)`（直接读入输入字符）；完整的形参表为：`cin.get(char *, int, char)` 对应存储字符，最大读入长度+1，分界符字符；只带两个参数时默认以回车为分界符，并将回车留在缓存区中（不读入；和getline读入回车并转换为'\0'对比）;
   - `cin.getline()` 