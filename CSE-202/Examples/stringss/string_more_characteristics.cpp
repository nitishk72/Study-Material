#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="welcome";
    string str1;
	cout << "Size = " << str1.size() << endl;
	cout << "Length = " << str1.length() << endl;
	cout << "Capacity = " << str1.capacity() << endl;
	cout << "Max Size = " << str1.max_size() << endl;
	cout << "Empty:  "<< (str1.empty() ? "yes" : "no") << endl;

    return 0;
}
