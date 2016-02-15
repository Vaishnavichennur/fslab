#include <iostream>
#include <fstream>
using namespace std;
string buffer;


class student{
		string name;
		string usn;
		string branch;
		string sem;
public:

	void readstudentfromconsole(){
		cin.clear();
		cin.ignore(255,'\n');
	cout<<"enter name"<<endl;
	getline(cin,name);
	cin.clear();
	cin.ignore(255,'\n');
	cout<<"\n enter usn"<<endl;
	cin>>usn;
	cout<<"\nEnter branch"<<endl;
	cin>>branch;
	cout<<"\n enter sem"<<endl;
	cin>>sem;
	}
	void show(){
		cout<<"\n name : "<<name;
		cout<<"\n usn : "<<usn;
		cout<<"\n branch : "<<branch;
		cout<<"\n sem : "<<sem;
	}
	void pack(){
		int i;
		string temp;
		temp+=name+'|'+usn+'|'+branch+'|'+sem;
		buffer = temp;
		for(i=temp.size();i<100;i++)
			 buffer+='$';
		cout<<buffer;
	}
	void write(){
		fstream f1;
		f1.open("data.txt",ios::out|ios::app);
		f1<<buffer;
		f1.close();
	}
};
int main()
{
	int choice;
	student s;
	while(1)
	{
	cout << "enter your choice  1. Insert 2. Search  3. Delete  4. Modify  5.exit\n";
	cin>>choice;
	switch(choice)
	{
	case 1:
		s.readstudentfromconsole();
		s.show();
		s.pack();
		s.write();
	}
	}
}
