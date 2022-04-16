#include <stdio.h>
#define ll long long
ll a[50];
ll b[50];
int main()
{
	int n, m;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &b[i]);
	}
	long double r = 1;
	long double l = 1;
	l += (long double)((1 << n) - 1) / (long double)m;
	for (int i = 0; i < n; i++)
	{
		r *= (long double)(a[i] + b[i]) / (long double)b[i];
	}
	printf("r: %Lf l: %Lf", r, l);
	return 0;
}