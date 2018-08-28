#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string s1 = "arlcome";
   string s2 = "wearweea";
   cout<<s2.find("we")<<endl;
   cout<<s2.rfind("we")<<endl;
   cout<<s2.find_last_of('e')<<endl;
   cout<<s2.find_first_of('e')<<endl;
   cout<<s2.at(0);
   return 0;
}
