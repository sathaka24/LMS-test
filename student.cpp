#include "student.h"

student::student()
{
    cout << "Creare Student\n";
    cout << "Creating\n";

}

void student::addStudent(const char *name)
{
    this->name = name;
}

student::~student()
{

}
