#include <stdio.h>>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int mod, num, count = 0, a, dlim = 1, ulim = 1000;
	char ans;

	do {
		printf("Choose the game mod (1 - you guess the number, 2 - the computer guesses the number)");
		scanf_s("%d", &mod);
	} while ((mod != 1) && (mod != 2));

	if (mod == 1) {
		num = rand() % 1000;
		printf("Guess the number (1 ... 1000)");
		scanf_s("%d", &a);
		while (num != a) {
			printf("Nice try\n");
			if (num > a) { printf("Over\n"); }
			if (num < a) { printf("Less\n"); }
			printf("Guess the number (1 ... 1000)\n");
			scanf_s("%d", &a);
			count ++;
		}
		count++;
		printf("Congratilations! You finally guessed.\n");
		printf("Amount of tries = %d", count);
		return 0;
	}

	if (mod == 2) {
		do {
			printf("Input your number (1 ... 1000)\n");
			scanf_s("%d", &num);
		} while ((num < 1) || (num > 1000));

		a = rand() % 1000;
		printf("The number is %d.\n", a);
		printf("Input the the answer ( <, >, = )\n");

		do {
			scanf_s("%c", &ans);

			if (ans == '>') {
				dlim = a + 1;
				a = dlim + rand() % (ulim - dlim + 1);
				count++;
				printf("The number is %d.\n", a);
			}

			if (ans == '<') {
				ulim = a - 1;
				a = dlim + rand() % (ulim - dlim + 1);
				count++;
				printf("The number is %d.\n", a);
			}
		} while (a != num);

		printf("The computer guessed your number\n");
		printf("Amount of tries = %d\n", count);
		return 0;
	}
}
