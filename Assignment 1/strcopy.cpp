#include<iostream>
using namespace std;

char* copy(char *s1, char *s2)
{	
	int i = 0, j = 0;
	while(s1[i] != '\0')
	{
		s2[j] = s1[i];
		i++;
		j++;
 	}

 	s2[i] = '\0';

 	return s2;
}

int main()
{
	char s1[20] = "Dhruv";
	char s2[20] = "Aggarwal";

	char *res = copy(s1,s2);

	cout << res << endl;
	return 0;
}