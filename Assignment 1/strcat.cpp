#include<bits/stdc++.h>
using namespace std;

string strcat(char* s1, char* s2)
{
	int i, j;
	i = 0;
	j = 0;

	while(s1[i] != '\0')
	{
		i++;
	}

	while(s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++; j++;
	}

	s1[i] = '\0';

	return s1;
}

int main()
{
	char s1[] = "Tom";
	char s2[] = " Hanks";

	string res = strcat(s1, s2);

	cout << "The concatenated String-> " << res;
	return 0;
}