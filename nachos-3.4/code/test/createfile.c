#include "syscall.h"
int main() {
	Create("abc.txt");
	Open("abc.txt", 0);
	return 0;
}