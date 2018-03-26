#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main() {
	double R1, R2, P1, P2;
	cin >> R1 >> P1 >> R2 >> P2;
	double end1 = R1*R2*cos(P1)* cos(P2) - R1*R2*sin(P1)*sin(P2) ;
	double end2 = R1*R2*cos(P1)* sin(P2) + R1*R2*cos(P2)*sin(P1);
	if (end1 > -0.005 && end1 < 0) end1 = 0; // (-0.005, 0)
	if (end2 > -0.005 && end2 < 0) end2 = 0; // (-0.005, 0)
	printf("%.2f%+.2fi", end1, end2);
	system("pause");
	return 0;
}