#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	scanf("%d",&c);

	int a,m,d;

	a = c/365;
	m = (c%365)/30;
	d = ((c%365)%30);

	printf("%d ano(s)\n",a);
	printf("%d mes(es)\n",m);
	printf("%d dia(s)\n",d);
	return 0;
}