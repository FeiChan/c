#include<iostream>
#include<string>
using namespace std;
string StrConcate(string & str1,string & str2)
{
	return str1+str2;
}

int main()
{
//   using namespace std;
   string str1="hello";
   string str2="world";
   string str=StrConcate(str1,str2);
   cout<<str<<endl;

	return 0;
}
