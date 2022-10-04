#include <stdio.h>
#include <math.h>

int main() {
	float cx1, cx2, r1, cy1, cy2, r2, d;
	printf("Input coordinates of the first circle (x, y, r):");
	scanf_s("%f %f %f", &cx1, &cy1, &r1);
	printf("Input coordinates of the second circle (x, y, r):");
	scanf_s("%f %f %f", &cx2, &cy2, &r2);
	d = sqrt((cx1 - cx2) * (cx1 - cx2) + (cy1 - cy2) * (cy1 - cy2));

	if ((d == 0) && (r1 == r2)) {
		printf("Circles coincide");
		return 0;
	}

	if (d > (r1 + r2)) {
		printf("Circles don`t intersect (outside)");
		return 0;
	}

	if (d < abs(r1 - r2) && (d > 0)) {
		printf("Circles don`t intersect (inside)");
			return 0;
	}

	if ((d < r1 + r2) && (d > abs(r1 - r2))) {
		printf("Circles intersect in two points");
			return 0;
	}

	if (d == r1 + r2) {
		printf("Circles intersect in one point (outside)");
		return 0;
	}

	if (d == abs(r1 - r2)) {
		printf("Circles intersect in one point (inside)");
		return 0;
	}
	return 0;
}