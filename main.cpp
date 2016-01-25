#include "Groups.h"

int main(int argc, const char* argv[])
{
	Student* b1 = new Student;
	Groups* b2 = new Groups;
	Student* b3 = b2;
	Groups* b4 = static_cast<Groups*>(b3);

	b1->funceasy();
	b1->funcvirtual();

	b2->funceasy();
	b2->funcvirtual();

	b3->funceasy();
	b3->funcvirtual();

	b4->funceasy();
	b4->funcvirtual();
}
