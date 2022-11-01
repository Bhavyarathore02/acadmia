#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<mmsystem.h>
#include<iomanip>
#include<unistd.h>
#include<fstream>
using namespace std;

	class startpage{

string username,password;
public:
	void sign_in();
		
		void login();
		void start();
		
	
};
void startpage:: sign_in(){

	  int a;
		system("Cls");
		system("color FD");
		
		cout<<setw(65)<<"*********create account*********\n";
		Sleep(4);
		ofstream out;
		out.open("sign.txt",ios::out|ios::app);
		cout<<setw(50)<<" Create a username";
		cin>>username;
		cout<<setw(50)<<"Enter the password";
		cin>>password;
		cout<<setw(50)<<"Signing in";
		for(int i=0; i<6; i++){
			cout<<".";
			Sleep(500);
		}
		for(int i=0; i<6; i++){
			cout<<"!";
			Sleep(200);
		}
		cout<<"\n\n";
		cout<<setw(50)<<"please  wait ......";
		cout<<"\n\n\n";
		Sleep(2000);
		cout<<setw(50)<<"account created successfully\n\n";
		for(int i=0; i<240; i++){
			cout<<"*";
			Sleep(5);
		}
	     
		out<<username;
		out<<password;
		out<<"\n";
		out.close();
		cout<<"\n\n\n";
	cout<<setw(50)<<"1.login\n";
	cout<<setw(50)<<"2.Go back\n";
	cout<<setw(50)<<"3.Exit\n";
	cin>>a;
	switch(a){
		case 1: login();
		break;
		case 2: sign_in();
		break;
		case 3: exit(0);
		break;
	}
	
}

void startpage::login(){
	int choice;
	string a,x;
	system("Cls");
	system("color 02");
	string user,pass;
	cout<<"Enter the username";
	cin>>user;
	cout<<"enter the password";
	cin>>pass;
	a=user+pass;
	fstream in;
	in.open("sign.txt");
	for(int i=0; i<50; i++){
	
	 getline(in,x);

	
	
if(a==x)	{

		cout<<setw(50)<<"logging in";
		for(int i=0; i<6; i++){
			cout<<".";
			Sleep(500);
		}
			for(int i=0; i<6; i++){
			cout<<"!";
			Sleep(200);
			}
		break;
	}
	
}


	if(a!=x){
		cout<<"wrong id or password entered\n";
		cout<<"1.Try again\n2.Create id\n3.Go back\n4.Exit";
		cout<<"enter your choice";
		cin>>choice;
		if(choice==1){
			 login();
			
		}
		else if(choice==2){
			 sign_in();
			
		}
		else if(choice==3){
			start();
		}
		else{
			exit(0);
		}
	}
	in.close();
}

void startpage::start(){
	system("Cls");
	system("color 09");
int ch;
cout<<setw(20);
for(int i=0; i<20; i++){
	cout<<"=";
	Sleep(5);
}
cout<<"Welcome to acaedamic search engine";
for(int i=0; i<20; i++){
	cout<<"=";
	Sleep(5);
}
cout<<"\n\n\n\n";
Sleep(1000);

cout<<"1. Log in\n2. Create account\n3. Go back\n\n";
cout<<setw(50)<<"enter  your choice";
cin>>ch;
switch(ch){
	case 1:  login();
	      break;
	case 2: sign_in();
          break;
	case 3: start();
	
}
}
class academics{
	string branch;
	int year;
	int sem;
	int subcode;
	int a;
	public:
	void get_details(){
		system("Cls");
		system(" color F2");
		cout<<"enter your branch";
		cin>>branch;
		cout<<"Enter your year";
		cin>>year;
		cout<<"enter your sem";
		cin>>sem;
		if(branch=="cse"&& year==1&& sem==1){
             subjects1stsem();			
		}
		else if(branch=="cse"&& year==1&&sem==2){
			subjects2ndsem();
		}
		else if(branch=="it"&& year==1&&sem==1){
			subjects2ndsem();
		}
		else if(branch=="it"&&year==1&& sem==2){
			subjects1stsem();
		}
	}

void subjects1stsem(); 
void subjects2ndsem();
void notes1stsem();
void notes2ndsem();
void timetable();

void syllabus();

void previous1();
void previous2();

	
};
void academics::previous2(){
	char x;
	if(subcode==1){
		string a="start https://in.docworkspace.com/d/sINSJ9oRH6cL4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIDWJ9oRHg8P4mgY?sa=00&st=0 ";
		string c=" start https://in.docworkspace.com/d/sICuJ9oRHpcP4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects2ndsem();
		}
		}
		if(subcode==2&& branch =="cse"){
				string a="start https://in.docworkspace.com/d/sIBmJ9oRH1MP4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sINuJ9oRHwMn4mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sILqJ9oRHpsr4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects2ndsem();
		}
		}
		if (subcode==2&& branch=="it"){
			string a="start https://in.docworkspace.com/d/sIAaJ9oRHyr34mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIJaJ9oRHhr74mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sIPCJ9oRHor74mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects2ndsem();
		}
		}
		
		if(subcode==3){
				string a="start https://in.docworkspace.com/d/sIFWJ9oRH3cr4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sICeJ9oRHicv4mgY?sa=00&st=0 ";
		string c=" start https://in.docworkspace.com/d/sIECJ9oRHusv4mgY?sa=00&st=0 ";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
		Sleep(10000);	
			subjects2ndsem();
		}
		}
	if(subcode==4){
			string a="start https://in.docworkspace.com/d/sILqJ9oRH_Mv4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIDKJ9oRHn8z4mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sIEmJ9oRHx8z4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects2ndsem();
		}
	}
	if(subcode==5){
			string a="start https://in.docworkspace.com/d/sIGaJ9oRH8sz4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIGaJ9oRHlM34mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sIACJ9oRHt834mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects2ndsem();
		}
	}

}
void academics::previous1(){
	char x;
	if(subcode==1){
		string a="start https://in.docworkspace.com/d/sIFSJ9oRH3LX4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sINaJ9oRHlLb4mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sIMKJ9oRHvbb4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects1stsem(); 
		}
		}
		if(subcode==2&& branch=="cse"){
				string a="start https://in.docworkspace.com/d/sIAaJ9oRHyr34mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIJaJ9oRHhr74mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sIPCJ9oRHor74mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects1stsem(); 
		}
		}
		if(subcode==2&& branch=="it"){
				string a="start https://in.docworkspace.com/d/sIBmJ9oRH1MP4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sINuJ9oRHwMn4mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sILqJ9oRHpsr4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects1stsem(); 
		}
		}
		if(subcode==3){
				string a="start https://in.docworkspace.com/d/sIDuJ9oRH18D4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIJ2J9oRH8sD4mgY?sa=00&st=0 ";
		string c=" start https://in.docworkspace.com/d/sIJeJ9oRHkcH4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects1stsem(); 
		}
		}
	if(subcode==4){
			string a="start https://in.docworkspace.com/d/sIMSJ9oRHscH4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIBCJ9oRHzcH4mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sIBqJ9oRH6cH4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects1stsem(); 
		}
	}
	if(subcode==5){
			string a="start https://in.docworkspace.com/d/sIPWJ9oRHj8L4mgY?sa=00&st=0";
		string b="start https://in.docworkspace.com/d/sIAiJ9oRHqsL4mgY?sa=00&st=0";
		string c=" start https://in.docworkspace.com/d/sINSJ9oRHx8L4mgY?sa=00&st=0";
		cout<<"1.2020\n2.2019\n3.2018\n";
		cout<<"enter your choice";
		cin>>x;
		
		if(x=='1'){
			system(a.c_str());
		}
		else if(x=='2'){
			system(b.c_str());
		}
		else if(x=='3'){
			system(c.c_str());
		}
		else{
			cout<<"invalid choice";
			Sleep(10000);
			subjects1stsem(); 
		}
	}
}
void academics::syllabus(){
	string a="start https://in.docworkspace.com/d/sIOmJ9oRHvLL4mgY?sa=00&st=0";
	system(a.c_str());
}
void academics::timetable(){
	if(branch=="cse"&& year==1&& sem==1){
		
	}
}
void academics::notes2ndsem(){
		if(subcode==1){
	
		string a="start https://in.docworkspace.com/d/sICOJ9oRHtqL4mgY?sa=00&st=0";
	    string b=" start https://in.docworkspace.com/d/sIIqJ9oRHx6L4mgY?sa=00&st=0";
	    string c=" start https://in.docworkspace.com/d/sIFiJ9oRH16L4mgY?sa=00&st=0";
	    string d="start https://in.docworkspace.com/d/sIKWJ9oRH56L4mgY?sa=00&st=0";
	    string e="start https://in.docworkspace.com/d/sIMqJ9oRHh6P4mgY?sa=00&st=0";
	  
	char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}

else {
	cout<<"Invalid choice";
	Sleep(10000);
	subjects2ndsem();
}
}
if(subcode==2&& branch=="cse"){
	string a="start https://in.docworkspace.com/d/sIHaJ9oRH5qP4mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIBaJ9oRH-KP4mgY?sa=00&st=0";
	string c="start https://in.docworkspace.com/d/sINaJ9oRHiaT4mgY?sa=00&st=0";
	string d=" start https://in.docworkspace.com/d/sIBWJ9oRHmaT4mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sIHCJ9oRHqaT4mgY?sa=00&st=0";
	char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects2ndsem();
}
}
if(subcode==2&& branch=="it"){
	string a="start https://in.docworkspace.com/d/sIDmJ9oRH1tP5mgY?sa=00&st=0 ";
	string b="start https://in.docworkspace.com/d/sIK6J9oRH6dP5mgY?sa=00&st=0 ";
	string c="start https://in.docworkspace.com/d/sIG2J9oRH-dP5mgY?sa=00&st=0 ";
	string d=" start https://in.docworkspace.com/d/sIF-J9oRHjNT5mgY?sa=00&st=0 ";
	string e="start https://in.docworkspace.com/d/sIA2J9oRHoNT5mgY?sa=00&st=0";

	char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects2ndsem();
}
	
}
if(subcode==3){
	string a="start https://in.docworkspace.com/d/sIPCJ9oRHkKX4mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIBSJ9oRHoKX4mgY?sa=00&st=0";
	string c="start https://in.docworkspace.com/d/sIKqJ9oRHuKX4mgY?sa=00&st=0";
	string d="start https://in.docworkspace.com/d/sIBSJ9oRH0qX4mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sINaJ9oRH5aX4mgY?sa=00&st=0";
		char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
Sleep(10000);	
	subjects2ndsem();
}
}
if (subcode==4){
	string a="start https://in.docworkspace.com/d/sIG-J9oRHmKf4mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIKeJ9oRHqaf4mgY?sa=00&st=0";
	string c="start https://in.docworkspace.com/d/sIBeJ9oRHt6f4mgY?sa=00&st=0";
	string d="start https://in.docworkspace.com/d/sIIWJ9oRHyaf4mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sIMmJ9oRH2af4mgY?sa=00&st=0";
		char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects2ndsem();
}
	
}
if(subcode==5){
	string a="start https://in.docworkspace.com/d/sINWJ9oRH9af4mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIGuJ9oRHhqj4mgY?sa=00&st=0";
	string c="start https://in.docworkspace.com/d/sIIiJ9oRHl6j4mgY?sa=00&st=0";
	string d="start https://in.docworkspace.com/d/sILKJ9oRHzaj4mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sIMmJ9oRH2af4mgY?sa=00&st=0 ";
		char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects2ndsem();
}
}

}
void academics::notes1stsem(){
	if(subcode==1){
	
		string a=" start https://in.docworkspace.com/d/sIHuJ9oRH5M75mgY?sa=00&st=0";
	    string b=" start https://in.docworkspace.com/d/sIMWJ9oRHo8_5mgY?sa=00&st=0";
	    string c=" start https://in.docworkspace.com/d/sIM2J9oRHw8_5mgY?sa=00&st=0";
	    string d="start https://in.docworkspace.com/d/sIHqJ9oRH3M_5mgY?sa=00&st=0";
	    string e="start https://in.docworkspace.com/d/sIEeJ9oRH1tD5mgY?sa=00&st=0 ";
	    string f="start https://in.docworkspace.com/d/sIEeJ9oRH1tD5mgY?sa=00&st=0 ";
	    string g="start https://in.docworkspace.com/d/sIKqJ9oRH69D5mgY?sa=00&st=0";
	char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n6.unit 6\n7.unit 7";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}
else if(x=='6'){
	system(f.c_str());
}
else if(x=='7'){
	system(e.c_str());
}
else {
	cout<<"Invalid choice";
	Sleep(1000);
	subjects1stsem(); 
}
}
if(subcode==2&& branch=="cse"){
	string a="start https://in.docworkspace.com/d/sIDmJ9oRH1tP5mgY?sa=00&st=0 ";
	string b="start https://in.docworkspace.com/d/sIK6J9oRH6dP5mgY?sa=00&st=0 ";
	string c="start https://in.docworkspace.com/d/sIG2J9oRH-dP5mgY?sa=00&st=0 ";
	string d=" start https://in.docworkspace.com/d/sIF-J9oRHjNT5mgY?sa=00&st=0 ";
	string e="start https://in.docworkspace.com/d/sIA2J9oRHoNT5mgY?sa=00&st=0";
	char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects1stsem(); 
}
}
if(subcode==2&& branch=="it"){
	string a="start https://in.docworkspace.com/d/sIHaJ9oRH5qP4mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIBaJ9oRH-KP4mgY?sa=00&st=0";
	string c="start https://in.docworkspace.com/d/sINaJ9oRHiaT4mgY?sa=00&st=0";
	string d=" start https://in.docworkspace.com/d/sIBWJ9oRHmaT4mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sIHCJ9oRHqaT4mgY?sa=00&st=0";
	
	char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects1stsem(); 
}
	
}
if(subcode==3){
	string a="start https://in.docworkspace.com/d/sICqJ9oRHutT5mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIHyJ9oRHzNT5mgY?sa=00&st=0  ";
	string c="start  https://in.docworkspace.com/d/sIPiJ9oRH3NT5mgY?sa=00&st=0 ";
	string d="start https://in.docworkspace.com/d/sIP-J9oRH79T5mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sIMSJ9oRHgNX5mgY?sa=00&st=0";
		char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects1stsem(); 
}
}
if (subcode==4){
	string a="start https://in.docworkspace.com/d/sIJeJ9oRHtoj4mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIOSJ9oRHzIj4mgY?sa=00&st=0";
	string c="start https://in.docworkspace.com/d/sIGeJ9oRH_Ij4mgY?sa=00&st=0";
	string d="start https://in.docworkspace.com/d/sIFOJ9oRHjon4mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sICCJ9oRHnon4mgY?sa=00&st=0";
		char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects1stsem(); 
}
	
}
if(subcode==5){
	string a="start https://in.docworkspace.com/d/sIBeJ9oRHgYr4mgY?sa=00&st=0";
	string b="start https://in.docworkspace.com/d/sIEuJ9oRHkIr4mgY?sa=00&st=0 ";
	string c="start https://in.docworkspace.com/d/sIOWJ9oRHnor4mgY?sa=00&st=0";
	string d="start https://in.docworkspace.com/d/sILeJ9oRHrYr4mgY?sa=00&st=0";
	string e="start https://in.docworkspace.com/d/sIF6J9oRHwYr4mgY?sa=00&st=0";
		char x;
	cout<<"1.unit 1\n2.unit 2\n3.unit 3\n4.unit 4\n5.unit 5\n";
	cout<<"Enter your choice";
	cin>>x;
	if(x=='1'){
		system(a.c_str());
	}
	else if(x=='2'){
		system(b.c_str());
	}
	else if(x=='3'){
		system(c.c_str());
	}
	else if(x=='4'){
		system(d.c_str());
	}
else if(x=='5'){
	system(e.c_str());
}else{
	cout<<"invalid choice";
	Sleep(10000);
	subjects1stsem(); 
}
}

}
void academics::subjects2ndsem(){
	
	system("cls");
	system("color F0");
	cout<<setw(50);
	
	cout<<"***********||What are u looking for||*************";
	cout<<"\n";
	cout<<"1.Notes\n";
	cout<<"2.Time Table\n";
	cout<<"3.Syllabus\n";
	cout<<"4.previous year papers\n";
	cout<<"5.Exit\n";
	cout<<"Enter your choice";
	cin>>a;
	if(a==2){
		timetable();
	}
	if(a==3){
		syllabus();
	}
	if(a==1||a==4){
	
	cout<<"Enter your subject code\n";
	cout<<"1.BT-201-:Engineering Physics\n";
	if(branch=="it"){
		cout<<"2.BT-101-:Mathematics-1\n";
	}
	else{
	cout<<"2.BT-202-:Mathematics-2\n";
}
	cout<<"3.BT-203-:Basic Mechanical Engineering\n";
	cout<<"4.BT-204-:Basic civil Engineering and Mechanics\n";
	cout<<"5.BT-205-:Basic computer engineering\n";
	cin>>subcode;
}
	if(a==1){
		notes2ndsem();
	}
	
	else if(a==4){
		previous2();
	}
	else{
		exit(0);
	}
	
}
void academics::subjects1stsem(){
	
	system("cls");
	system("color F0");
	cout<<setw(50);
	
	cout<<"***********||What are u looking for||*************";
	cout<<"\n";
	cout<<"1.Notes\n";
	cout<<"2.Time Table\n";
	cout<<"3.Syllabus\n";
	cout<<"4.previous year papers\n";
	cout<<"5.Exit\n";
	cout<<"Enter your choice";
	cin>>a;
	if(a==2){
		timetable();
	}
	if(a==3){
		syllabus();
	}
	if(a==1||a==4){
	
	cout<<"enter your subject code\n";
	cout<<"1.BT-101-:Engineering Chemistry\n";
	if(branch=="cse"){
	
	cout<<"2.BT-102-:Mathematics-1\n";
	
	}
	else{
	cout<<"2.BT-202-:Mathematics-2\n";
	}
	cout<<"3.BT-103-:English For Communication\n";
	cout<<"4.BT-104-:Basic Electrical and Electronic Engineering\n";
	cout<<"5.BT-105-: Engineering Graphics\n";
//	cout<<"6.BT-106-: Manufacturuing Practices\n";
//	cout<<"7.BT-108-:Swachh Bharat Summer Internship\n";
	cin>>subcode;
}
	if(a==1){
		notes1stsem();
	}
	
			else if(a==4){
			previous1();
			}
			else{
				exit(0);
			}

}
int main(){
startpage obj;
obj.start();
academics obj1;
obj1.get_details();
return 0;
}

