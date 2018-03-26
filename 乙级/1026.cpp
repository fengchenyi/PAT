#include<iostream> 
#include<stdio.h>
#include<time.h>
using namespace std;
int main() {
	int a, b;
	cin >> a>>b;
	float c = (float(b) - float(a)) / 100;
	float temp = c - int(c);
	int end;
	if (temp >= 0.5) {
		end = int(c) + 1;
	}
	else {
		end = int(c);
	}
	int hours, minutes, seconds;
	hours = end / 3600;
	end -= hours * 3600;
	minutes = end / 60;
	end -= minutes * 60;
	seconds = end;
	cout << hours << ":" << minutes << ":" << seconds << endl;
	return 0;
}