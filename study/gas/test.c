#include <stdio.h>
void test();
int main(){
	int a = 5;
	printf("ID is:%d\n", a);
	test();
	return 0;

}
void test(){
	printf("hello,%s\n", "world!");
}
