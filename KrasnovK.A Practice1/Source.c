#include <stdio.h>
#include <math.h>

int main() {

	float h, w, d, m, dvp = 750, dsp = 800, wood = 650, m_back, m_sides, m_ud, m_doors, m_sh;

	printf("Input height (180-220), width(80-120), depth (50-90) of the cupboard (cm)");
	scanf_s("%f %f %f", &h, &w, &d);

	if ((h < 180) || (h > 220) || (w < 80) || (w > 120) || (d < 50) || (d > 90)) {
		printf("Uncorrect data");
		return 0;
	}

	m_back = h * w * 0.5 * dvp / 1000000;
	m_sides = h * d * 1.5 * dsp * 2 / 1000000;
	m_ud = (w - 3) * (d - 0.5) * 1.5 * dsp * 2 / 1000000;
	m_doors = h * w * wood / 1000000;
	if (h > 200) {
		m_sh = (w - 3) * (d - 0.5) * 1.5 * dsp * 5 / 1000000;
	}
	else {
		m_sh = (w - 3) * (d - 0.5) * 1.5 * dsp * 4 / 1000000;
	}
	m = m_back + m_sides + m_ud + m_doors + m_sh;

	printf("m = %f", m);

	return 0;
}
