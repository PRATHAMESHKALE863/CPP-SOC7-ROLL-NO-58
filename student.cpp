#include <iostream>

using namespace std;

class Student
 {
	public:
    	int rollno;
    	string s_name;
    	float marks;
   	 void accept()
	 {
        	cout << "Enter The Student name: "<<endl;
        	cin.ignore();
		getline(cin,s_name);
        
        	cout << "Enter the student roll no: ";
        	cin>> rollno;
        
        	cout << "Enter the student marks: ";
        	cin >> marks;
	 }
	void calculateresult()
				{

					if(marks>=40)
					{
					cout<<"congratulations! you are passed"<<endl;
					}
					else
					{
					cout<<"you are failed"<<endl;
					}
				}

    	void display()
		 {
        		cout << "\n--- Student Details ---"<< endl;
        		cout << "The Student name is :"<<s_name << endl;
        		cout << "The Student roll no is :"<< rollno << endl;
        		cout << "The marks of the student are :"<< marks << endl;
		calculateresult();
		}
};

	int main()
		 {
		 	Student s;
			s.accept();
			s.display();

    	return 0;
}
