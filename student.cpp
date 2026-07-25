#include "student.h"

student::student()
{
    cout << "Creare Student\n";

}

void student::addStudent(const char *name)
{
    this->name = name;
}

student::~student()
{

}
