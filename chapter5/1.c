#include<stdio.h>
int main() {
	int a, b;
	
	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	printf("��: %d ������: %d", a / b, a % b);

	return 0;
}