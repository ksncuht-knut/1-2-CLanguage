#include <stdio.h>
#include <stdlib.h>
main()
{
	/* 여기서는 printf(), 이스케이프 시퀀스, 변환 문자를 학습해보자. */

	printf("수량\t단가\t총액\n");
	printf("%d\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
	printf("너무 많은 스페이스는   \b\b\b\b와 같이 ");
	printf("\\%c 이스케이프 문자로 수정이 가능하다.\n", 'b');

	printf("\n\a\n\a\n\a\n\a\n\a몇줄을 건너뛰고 경고 사운드를 ");
	printf("출력한다.\n\n\n");
	printf("%c%s.", 'C', "를 정복하는 중이다");
	printf("여러분은 %d장을 끝냈다. 여러분은 이미 이 책의 ", 4);
	printf("%.1f%c를 학습하였다.\n", 12.500, '%');

	printf("\n\n삼분의 일은 %.2f와 같거나 ", 0.333333);
	printf("%.3f와 같거나 %.4f와 같거나 ", 0.333333, 0.333333);
	printf("%.5f와 같거나 %.6f와 같다. \n\n\n", 0.333333, 0.33333333);

	system("pause");
	return 0;
}