#include<iostream>
using namespace std;

int main() {
	int TestCase;
	cin >> TestCase;

	for (int i = 0; i < TestCase; i++) {
		int client;
		int workHour = 0;
		int	workMinute = 0;
		int	workSecond = 0;
		int	workDay = 0;
		cin >> client;

		for (int j = 0; j < client; j++) {
			int startHour, startMinute, startSecond,
				finishHour, finishMinute, finishSecond;
			cin >> startHour >> startMinute >> startSecond
				>> finishHour >> finishMinute >> finishSecond;

			if (finishSecond - startSecond < 0) {
				workSecond += 60 + (finishSecond - startSecond);
				workMinute--;
			}
			else {
				workSecond += finishSecond - startSecond;
			}
			if (finishMinute - startMinute < 0) {
				workMinute += 60 + (finishMinute - startMinute);
				workHour--;
			}
			else {
				workMinute += finishMinute - startMinute;
			}
			workHour += finishHour - startHour;
		}
		if (workSecond >= 60) {
			workMinute += workSecond / 60;
			workSecond = workSecond % 60;
		}
		if (workMinute >= 60) {
			workHour += workMinute / 60;
			workMinute = workMinute % 60;
		}
		if (workHour >= 24) {
			workDay += workHour / 24;
			workHour = workHour % 24;
		}
		cout << workDay << " " << workHour << " " << workMinute << " " << workSecond << endl;
	}
	return 0;
}
