
#include "Student.h"
#include "Menu.h"
typedef pair<string, int> p;
int main() {
	sublist pred;
	pred.insert(p("Філософія", 100));
	pred.insert(p("Психологія", 10));
	pred.insert(p("Фізика", 45));
	pred.insert(p("Економіка", 80));
	pred.insert(p("Географія", 76));

	Student student1(pred);
	runmenu<Student>(student1);
}