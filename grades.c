#include <stdio.h>
float average(int scores[], int count) {
	int sum = 0;
	for (int i = 0; i < count; i++) {
			sum = sum + scores[i];
			}
			return (float)sum / count;
			}
char getGrade(float avg) {
	if (avg >= 80) return 'A';
	if (avg >= 60) return 'B';
	if (avg >= 40) return 'C';
	return 'F';
}
int main(void) {
	int scores[5];
	char name[50];

	printf("Enter student name: ");
	scanf("%s", name);

	for (int i = 0; i < 5; i++){
		printf("Enter score %d (0-100): ", i + 1);
		scanf("%d", &scores[i]);
	}
	float avg = average(scores, 5);
	int findMax(int scores[], int count) {
		int max = scores[0];
		for (int i = 1; i < count; i++) {
			if (scores[i] > max) {
				max = scores[i];
			}
		}

		return max;
	}

	int findMin(int scores[], int count) {
		int min = scores[0];
		for (int i = 1; i < count; i++) {
			if (scores[i] < min) {
				min = scores[i];
			}
		}
		return min;
	}


	char grade = getGrade(avg);

	int highest = findMax(scores, 5);
	int lowest = findMin(scores, 5);

	printf("\n_ _ _ Report _ _ _\n");
	printf("Student: %s\n", name);
	printf("Average: %.2f\n", avg);
	printf("Grade: %c\n", grade);
	printf("Highest: %d\n", highest);
	printf("Lowest: %d\n", lowest);

	return 0;

}


