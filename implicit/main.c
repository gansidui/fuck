#include <stdio.h>
#include <stdint.h>
// #include "test.h"
#include "node.h"

int main() {
	uint64_t ret = getUint64();
	printf("ret == %llu\n", ret);
	
	Node a;
	a = getStruct();
	printf("a.v == %d\n", a.v);

	return 0;
 }
