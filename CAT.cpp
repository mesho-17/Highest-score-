#include <iostream>

using namespace std;

struct studentInfo{
	string studentFname;
	string studentLname;
	
	float cat1, cat2, total, highscore;
	 
};

int highestStudent(studentInfo student[4]);

int main(){
	//no of students
	studentInfo student[4]; /*student is an array containing 4 elements(students)
	                          we declare the array by giving an address or reference 
							  to struct studentInfo */
	studentInfo total; /*total is a struct variable, to declare it, we 
 	                      provide a reference to the struct (studentInfo) 
                         inorder for us to use it in the main function.*/
	
	//for loop to get user input for the info...
	for (int i = 1; i <= 2; i++){  /*int i = 1, counter starts from 1 and 
	                                 keeps on incrementing until the specified extent.*/
		cout<<endl;							                                  
		cout<<"Student's First name: ";
        cin>>student[i].studentFname; //tells the computer to store the data in the array(student)
        cout<<"Student's Last name: ";
        cin>>student[i].studentLname;
        cout<<"Cat one score: ";
        cin>>student[i].cat1;
        cout<<"Cat two score: ";
        cin>>student[i].cat2;
        cout<<endl;
		
        student[i].total = student[i].cat1 + student[i].cat2; /*initializing the struct variable (total) and 
		                                                        store in value in the array*/
        cout<<"Total score is "<<student[i].total; 
        cout<<endl;
	}
	
	//displays the highest student info and the score obtained
int highest = highestStudent(student);
cout<<student[highest].studentFname<<" "<<student[highest].studentLname<<" Has the highest score which is "<<student[highest].total<<endl;


}


int highestStudent(studentInfo student[4]){
	
	int best = 0;
	
	//condition under for loop to determine student with the highest score
	for (int j = 1; j <= 2; j++){
		if (student[j].total > student[best].total){
		   	best = j;
		}
	}
	
	
	return best;
}
