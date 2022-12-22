#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

int main()
{
	string s1 = "Mississipi";
	reverseStr(s1);

	cout << "The reversed String: " << s1; 
	return 0;
}