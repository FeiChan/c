#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

	string s1="Hello";
	string s2="gamma";
	string s3="whisle_blowere";
	string s4="Hello";
   vector <string> v1;
   vector <string> v2;
   v1.push_back(s1);
   v1.push_back(s2);
   v1.push_back(s3);
   v1.push_back(s4);
   sort(v1.begin(),v1.end());
//   vector<string> v2(v1.size());


   v2.push_back(s1);
   for(int i=1;i<v1.size();i++)
   {
       if(v1[i]!=v2[i])
        v2.push_back(v1[i]);
   }

   for(int i=0;i<v2.size();i++)
   {
	   cout<<v2[i]<<"\t";
   }
}



