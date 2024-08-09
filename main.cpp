#include<iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class User{
	private:
		
	public:
		void Welcome(){
			
			
			cout<<endl<<"\n\t***********************************************************"<<endl<<endl;
			cout<<"\t\tWelcome to Self Study Manager For Students\t"<<endl<<endl;
			cout<<"\t***********************************************************"<<endl<<endl;
			
			
		
	//sleep(2000);
		
		system("CLS");
		};
		
		void Login(){
			
		};
		
		void Registration(){
			string name,school,usernamereg,passwordreg;
			
			cout<<"\n\tPlease fill the form with your details";
			cout<<"\n\n\t1.Name : ";
			cin>>name;
			cout<<"\t1.School : ";
			cin>>school;
			cout<<"\t3.Username : ";
			cin>>usernamereg;
			cout<<"\t4.Password : ";
			cin>>passwordreg;
			
			cout<<"\n\n\tYour registeration process is sucessfull!\n\n";
			
			Sleep(2000);
			
			system("CLS");
			
			
			ofstream out("D:\\Programming\\C++\\Self Study Manager for Students\\try.txt", ios::app);

  			if (!out) {
 			   cout << "Error: File Not Opened!" << endl;
 			}
 			
			 else {
			    out << name << " : " << school <<" : "<<usernamereg<<" : "<<passwordreg<<  endl;
			    
			  }out.close();
					
		};
		
		void aboutUs(){
				
			cout<<"\n\n\t\tAbout Our Self Study Manager\n\n";

			cout<<"\n\tThis C++ program is designed to be your personal companion for self-directed learning in C++. \n\tIt empowers you to organize your study time effectively and track your progress towards mastering the language.\n\n";
			Sleep(3000);
			
			cout<<"\n\tPlease login to proceed";
		};
		
};

class RegisteredUser{
	private:
		
	public:
		void loginUser(){
				cout<<"\n\tEnter your username or email : ";
			string usename;
			cin>>usename;
			cout<<"\n\tEnter your password : ";	
			string pass;
			cin>>pass;
		};
		
};

class Admin{
	public:
		void loginAdmin(){
			cout<<"\n\tEnter your admin ID : ";
				int adminID;
				cin>>adminID;
				cout<<"\n\tEnter your password : ";	
				string pass;
				cin>>pass;
		};
};

class Task{
	
};

class courseContent{
	
};



int main(){
	
	int c1,c2,c3,c4,c5,c6,c7;
	
	User u1;
	RegisteredUser r1;
	Admin a1;
	
		//welcome message and requesting service type
		
	u1.Welcome();
	
	cout<<"\n\tSelect the service you like to have ? ";
			
		
			
			cout<<"\n\n\t1.Login";
			cout<<"\n\t2.Register";
			cout<<"\n\t3.Get in to know about our services\n\n\t";
			cin>>c2;
			
			string usename;
			
	
			
		if(c2==1||c2==01){
			
			//login type request
			
			
			
			cout<<"\n\n\tWhich type of an account do you have ?\n";
			cout<<"\n\t\t1.User account";
			cout<<"\n\t\t2.Admin account\n\n\t";
			cin>>c3;
			
			
			Sleep(2000);
			
			if(c3==1||c3==01){
				
			//login user
			
			r1.loginUser();			
		
			}
		
			else if(c3==2||c3==02){
				
				//login admin
				
				a1.loginAdmin();
				
			}
			
		}
		
		else if(c2==2||c2==02){
			
			//Registration type request
			
			
			
			cout<<"\n\n\tWhich type of an account do you have ?\n";
			cout<<"\n\t\t1.User account";
			cout<<"\n\t\t2.Admin account\n\n\t";
			cin>>c3;
			
			if(c3==1||c3==01){
				
				u1.Registration();
					
			
		}
		
			if(c3==2||c3==02){
			
				cout<<"\n\tSorry, You can't register as a admin by your self !!!";
			
			}
		
		}
		
		else{
			
			//About us description
			
			u1.aboutUs();
			r1.loginUser();
			
			
		}
		
	
		
		//Functionality selection
			system("CLS");
	
		cout<<"\n\n\n\tSelect your neeed :\n\n\n";
		cout<<"\t1.Study Tasks\n";
		cout<<"\t2.Course content\n";
		cout<<"\t3.Profile\n\n\t";
		
		cin>>c4;
		
		system("CLS");
		
		if(c4==1||c4==01){
			
			//study task selection
			
			int c5;
			
			cout<<"\n\n\t1.Add new study tasks\n";
			cout<<"\t2.View all study tasks\n";
			cout<<"\t3.Update study tasks\n\n\t";
			
			cin>>c5;
			
			system("CLS");
			
			if(c4==1||c4==01){
				
				//Add new study task
				
				string taskname,Ttime,deadline;
			
				cout<<"\n\n\tEnter study task information : \n";
				cout<<"\n\t1.Name of task : ";
				cin>>taskname;
				cout<<"\n\t2.Time duration : ";
				cin>>Ttime;
				cout<<"\n\t3.Deadline : ";
				cin>>deadline;
				
				ofstream out("D:\\Programming\\C++\\Self Study Manager for Students\\tasktry.txt", ios::app);

	  			if (!out) {
	 			   cout << "Error: File Not Opened!" << endl;
	 			}
	 			
				 else {
				    out << taskname << " : " << Ttime <<" : "<<deadline<<  endl;
				    	cout<<"\n\n\tTask added Sucessfully !!!\n\n";
				    
				  }out.close();
			
			}
			
			else if(c4==2||c4==02){
				
				//View study tasks
				
					//View all course content
				
				cout<<"\n\n\t\tCourse content \n";
				cout<<"\n\tName of task \tTime \tDeadline \n\n";
				
				
				
				ifstream in("D:\\Programming\\C++\\Self Study Manager for Students\\try.txt");
		
		if(!in){
			cout<<"Error: File Can Not Open!"<<endl;
		}
		
		else{
			string line;
			bool found=false;
			while(getline(in,line)){
				
				
				
					cout<<"\t"<<line<<endl;
				
			}
			
		
							
			}
							
			}
			
			else {
				
				//Update study tasks
				
				string name,time,deadline;
			
				cout<<"\n\n\tEnter study task information : ";
				cout<<"\n\tName of task : \n";
				cin>>name;
				cout<<"\n\t1.New name of task : ";
				cin>>name;
				cout<<"\n\t2.New Time duration : ";
				cin>>time;
				cout<<"\n\t3.New Deadline : ";
				cin>>deadline;
				
			
			
			}
			
		}
		
		else if(c4==2||c4==02){
			
		
			
			cout<<"\n\n\t1.Add course content\n";
			cout<<"\t2.View all course content\n";
			cout<<"\t3.Update course content\n\t";
			
			cin>>c6;
			
			if(c6==1||c6==01){
				
				//Add course content
				
				string name,time,deadline;
			
				cout<<"\n\n\tEnter course Details : ";
				cout<<"\n\t1.Name of module : ";
				cin>>name;
				cout<<"\n\t2.Time duration : ";
				cin>>time;
				cout<<"\n\t3.Explaination : ";
				cin>>deadline;
			
			}
			
			else if(c6==2||c6==02){
				
				//View all course content
				
				cout<<"\n\n\t\tCourse content \n";
				cout<<"\n\tName of task \tTime \tDeadline \n\n";
				
				
				
				ifstream in("D:\\Programming\\C++\\Self Study Manager for Students\\try.txt");
		
		if(!in){
			cout<<"Error: File Can Not Open!"<<endl;
		}
		
		else{
			string line;
			bool found=false;
			while(getline(in,line)){
				
				
				
					cout<<"\t"<<line<<endl;
				
			}
			
		
							
			}}
			
			else {
				
				//Update course content
				
				string name,time,deadline;
			
				cout<<"\n\n\tEnter study task information : ";
				cout<<"\n\tName of module : \n";
				cin>>name;
				cout<<"\n\t1.New name of module : ";
				cin>>name;
				cout<<"\n\t2.New Time duration : ";
				cin>>time;
				cout<<"\n\t3.New Deadline : ";
				cin>>deadline;
			
			}
			
			
		}
		
		else if(c4==3||c4==03){
			
			
			
			cout<<"\n\n\t1.View profile\n";
			cout<<"\t2.Update profile\n";
			cout<<"\t3.Delete profile\n";
			
			cin>>c7;
			
			if(c7==1||c7==01){
				
				string seName;
				cout<<"Enter your name : ";
				cin>>seName;
				
				ifstream in("D:\\Programming\\C++\\Self Study Manager for Students\\try.txt");
		
		if(!in){
			cout<<"Error: File Can Not Open!"<<endl;
		}
		
		else{
			string line;
			bool found=false;
			while(getline(in,line)){
				int pos = line.find(seName);
				
				if(pos !=string::npos){
					cout<<"Name | Age | School"<<endl;
					cout<<line<<endl;
					found=true;
				}
			}
			
			if(!found){
				cout<<"Student not found !"<<endl;
			}
			
		}
				
			}
			
			else if(c7==2||c7==02){
				
			}
			
			else if(c7==3||c7==03){
				
			}
			
		}
		
		else{
			 
			 cout<<"you have entered invalid response";
			 
		}
		
	return 0;
}
