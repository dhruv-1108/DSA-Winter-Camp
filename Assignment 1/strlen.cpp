#include<bits/stdc++.h>
using namespace std;

int strlen(char *s1)
{
	int cnt = 0; 
	while(s1[cnt] != '\0')
	{
		cnt++;
	}

	return cnt;
}

int main()
{
	char s1[] = "Mississipi";
	int res = strlen(s1);

	cout << res << endl;
	return 0;
}