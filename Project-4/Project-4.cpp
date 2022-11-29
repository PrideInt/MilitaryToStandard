#include <stdio.h>

int main() {
	int time, hours, minutes;
	printf("Enter the time in the format of 24-hours time: ");
	scanf_s("%d", &time);

	if (time < 0100) {
		hours = 0;
		minutes = time;
	} else {
		hours = time / 100;
		minutes = time % 100;
	}

	if (hours < 0 || hours > 24 || minutes < 0 || minutes > 59 || (hours == 24 && minutes > 0)) {
		printf("The hours must be range 0 to 24 and minutes must be in the range 0 to 59 inclusive.");
	} else {
		printf("The time in the format of 12-hour, a.m.-p.m. is: ");

		if (((hours < 10 && hours > 0) || (hours - 12 < 10 && hours - 12 > 0))) {
			if (hours - 12 < 10 && hours - 12 > 0) {
				printf("0%d:", hours - 12);
			} else {
				printf("0%d:", hours);
			}
		} else if (hours == 0 || hours == 24) {
			printf("12:");

		} else {
			if (hours > 12) {
				printf("%d:", hours - 12);
			} else {
				printf("%d:", hours);
			}
		}

		if (minutes < 10) {
			printf("0%d ", minutes);
		} else {
			printf("%d ", minutes);
		}

		if (hours < 12 || hours == 24) {
			printf("a.m.");
		} else {
			printf("p.m.");
		}
	}
}
