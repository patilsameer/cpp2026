

#include<iostream>
#include<string>
using namespace std;

class Student{
		private:
				int rollNo;
				string name;
    public:
			Student(){}
			Student(int r,string n){
					rollNo = r;
					name = n;
			}
  		void setData(int r, string n){
					rollNo = r;
					name = n;
			}
		 void display(){
				cout<<"RollNO="<<rollNo<<endl;
				cout<<"Name="<<name<<endl;
		}

		int getRollNo(){
			return rollNo;
		}
};

int main(){
		Student s;
		s.setData(1,"KIT");

		Student s1(2,"CSE");


		s.display();
		s1.display();


		cout<<s.getRollNo()<<endl;
		cout<<s1.getRollNo()<<endl;


}
