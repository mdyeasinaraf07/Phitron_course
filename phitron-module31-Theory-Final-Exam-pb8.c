#include<stdio.h>
struct Student{
    char name[20];
    int roll;
    int marks;
};
int main(){
    struct Student s;
    printf ("Enter information: \n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%d", &s.marks);
    printf("Displaying Information:\nName: %s\nRoll number: %d\nMarks: %d\n", s.name, s.roll, s.marks);

    return 0;
}

//Structure is a collection of data items of different data-types.
//We have seen that a variable can hold a single data item.
//Array can hold a collection of data items but all must be of the same type.
//Only arrays are insufficient, because in real life if we consider any object,
//entities related to that object are of various types. For e.g.
//if we want to keep a record of all the employees in a company, an employee number of integer type and salary type float.
//This can be done by using one array.
//One integer array for employee number and a third array of floating point numbers for salary.

//1--> Array elements are accessed using the Subscript variable, Similarly Structure members are
//accessed using dot [.] operator.
//2--> (.) is called a (Structure member Operator).
//3--> Use this Operator in between (Structure name) & (member name)
