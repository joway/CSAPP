#include <stdio.h>

//��mΪ1��ÿ��λ���Ͻ�x��Ӧλ���ó�1(��|)
int bis(int x, int m) {
	return x | m;
}

//��mΪ1��ÿ��λ���Ͻ�x��Ӧλ���ó�0
int bic(int x, int m) {
	return x&~m;
}

// |
int bool_or(int x, int y) {
	return (bis(x, y));
}

// ^
int bool_xor(int x, int y) {
	return bis(bic(x, y), bic(y, x));
}



//int main() {
//	int x, y;
//	while (scanf("%d %d", &x, &y)) {
//		printf("%d", bool_xor(x, y));
//	}
//}