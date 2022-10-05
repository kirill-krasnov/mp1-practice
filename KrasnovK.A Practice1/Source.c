#include <stdio.h>
#include <math.h>

int main() {

	float h, w, d, m, dvp, dsp, wood, m1, m2, m3, m4, m5;

	printf("Input height (180-220), width(80-120), depth (50-90) of the cupboard (cm)");
	scanf_s("%f %f %f", &h, &w, &d);

	if ((h < 180) || (h > 220) || (w < 80) || (w > 120) || (d < 50) || (d > 90)) {
		printf("Uncorrect data, idiot");
		return 0;
	}

	dvp = 750;
	dsp = 450;
	wood = 650;

	m1 = ((h * w * 0, 5) / 1000000) * dvp;
	m2 = (((h * d * 1, 5) / 1000000) * dsp) * 2;
	m3 = (((w * d * 1, 5) / 1000000) * dsp) * 2;
	m4 = ((h * w) / 1000000) * wood;
	if (h > 200) {
		m5 = (((((w - 3) * (d - 0, 5) * 1, 5) / 1000000) * dsp) * 5);
	}
	else {
		m5 = (((((w - 3) * (d - 0, 5) * 1, 5) / 1000000) * dsp) * 4);
	}
	m = m1 + m2 + m3 + m4 + m5;

	printf("m = %f", m);

	return 0;

}