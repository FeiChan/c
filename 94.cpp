#include<iostream>
#include<string>
using namespace std;
string myStrcopy(string src)
{ 
    
	return src;
}
int main()
{
	using namespace std;
  
	string str1="Hello";
	string str2;
	str2=myStrcopy(str1);
	cout<<str2<<endl;

	return 0;
}
