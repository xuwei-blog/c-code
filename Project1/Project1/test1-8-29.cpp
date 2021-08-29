#include <stdio.h>
struct stu
{

	char name[20];
	int age;
	double score;

};

int main()
{

	struct stu s = { "ÕÅÈı",20,85.5};
	printf("%s %d %lf", s.name, s.age, s.score);

	return 0;
}