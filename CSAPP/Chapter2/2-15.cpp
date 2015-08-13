#include <stdio.h>

bool isEqual(int x, int y) {
	return !(x&~y);
}

//int main() {
//	printf("%d", isEqual(123, 12345));
//}