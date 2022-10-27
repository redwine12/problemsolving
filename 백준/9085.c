#include<stdio.h>

int main() {
	int T, N, n[100] = { 0 }, sum[10] = { 0 },a=0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &n[j]);
			a = a + n[j];
		}
		sum[i] = a;
		a = 0;
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", sum[i]);
	}
	return 0;
}