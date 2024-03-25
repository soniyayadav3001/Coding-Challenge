#include<iostream>
using namespace std;
class Student{
	public:
		int age;
		int marks;
		Student(int a , int m){		//Parameterized Constructor
			age = a;
			marks =m;
		}
		Student(Student &s){		//Copy Constructor
			age=s.age;
			marks=s.marks;
		} 
		void display(){
			cout<<" Age is "<<age<<endl;
			cout<<" Marks is "<<marks<<endl;
		}
};
int main(){
Student amit(18,100);
Student ankit(amit);				//Copy Constructor Called
amit.display();
ankit.display();
	return 0;
}
