#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int K, N, i;
	double S;
	cout << "K = "; cin >> K;
	cout << "N = "; cin >> N;
	S = 1;
	i = K;
	while (i <= N)
	{
		S *= K / i + i / N;
		i++;
	}
	cout << S << endl;
	S = 1;
	i = K;
	do {
		S *= K / i + i / N;
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 1;
	for (i = K; i <= N; i++)
	{
		S *= K / i + i / N;
	}
	cout << S << endl;
	S = 1;
	for (i = N; i >= K; i--)
	{
		S *= K / i + i / N;
	}
	cout << S << endl;
	return 0;
}