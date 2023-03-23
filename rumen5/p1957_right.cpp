#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
	int n;
	cin>>n;//输入n 
	char ch;//要输入的字母 
	string s[n];//存放最后的表达式 
	for(int i=0;i<n;i++)//开始循环输入 
	{
		string st;//用来存放数字 
		stringstream io;//转换数字 
		int a,b,ans=0;//ans是答案 
		if(!(cin>>a))//利用了cin的性质 
		{
			cin.clear();
			cin>>ch>>a;
		}
		cin>>b;
		io<<a;io>>s[i];io.clear();//接下来对ch进行判断 
		if(ch=='a')
		{
			ans=a+b;
			s[i]+='+';
			io<<b;io>>st;io.clear();//io每次用完后要记得清空哦
			s[i]+=st;
			s[i]+='=';
			io<<ans;io>>st;io.clear();
			s[i]+=st;
		}//以此类推
	if(ch=='b')
		{
			ans=a-b;
			s[i]+='-';
			io<<b;io>>st;io.clear();
			s[i]+=st;
			s[i]+='=';
			io<<ans;io>>st;io.clear();
			s[i]+=st;
		}
	if(ch=='c')
		{
			ans=a*b;
			s[i]+='*';
			io<<b;io>>st;io.clear();
			s[i]+=st;
			s[i]+='=';
			io<<ans;io>>st;io.clear();
			s[i]+=st;
		}
	}
	for(int i=0;i<n;i++)//循环输出结果 
	{
		cout<<s[i]<<endl;
		cout<<s[i].size();
		if(i!=n-1)cout<<endl;
	}
}