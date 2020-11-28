#include <stdio.h>
#include <iostream>
using namespace std;
struct score {
	float point[99];
	float weight[99];
}student;
float subject[99];
void findTotal(struct score studentfunction);
void grade();
int limit;
float total = 0;
float totalweight = 0;
int main() {
	cout << "Enter subject(s)";
	cin >> limit;
	for (int i = 0; i < limit; i++) {
		cout << "subject score " ;
		cin >> student.point[i];
		cout << "subject weight " ;
		cin >> student.weight[i];

		subject[i] = student.point[i] * student.weight[i];
	}
	findTotal(student);
	grade();
	return 0;
}

void findTotal(struct score studentfunction) {
	for (int i = 0; i < limit; i++)
	{
		total += subject[i];
		totalweight += student.weight[i];
	}
}

void grade() 
{
	float temp;
	temp =total / totalweight ;
	
		if (temp >= 80 && temp < 100) 
		{
			cout << "A";
		}
		else if (temp >= 75 && temp < 80)
		{
			cout << "B+";
		}
		else if (temp >= 70 && temp < 75) 
		{
			cout << "B";
		}
		else if (temp >= 65 && temp < 70)
		{
			cout << "C+";
		}
		else if (temp >= 60 && temp < 65) 
		{
			cout << "C";
		}
		else if (temp >= 55 && temp < 60)
		{
			cout << "D+";
		}
		else if (temp >= 50 && temp < 55)
		{
			cout << "D";
		}
		else if (temp >=45 && temp < 50)
		{
			cout << "F";
		}
		else if (temp < 45)
		{
			cout << "GO HOME";
		}
		
	
}