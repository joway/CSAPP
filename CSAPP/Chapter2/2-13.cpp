#include <stdio.h>

//在m为1的每个位置上将x对应位设置成1(即|)
int bis(int x, int m) {
	return x | m;
}

//在m为1的每个位置上将x对应位设置成0
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