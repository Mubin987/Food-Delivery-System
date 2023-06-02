#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<time.h>

using namespace std;
class customer
{
	public:
		char uname[40],upass[40],prod[20],fname[20],lname[20],address[100];
		int cid,age,bill,cprice;
		long long int pn;
		int checkusername(char*);
	void signup();
	int customerlogin();
	void customermenu(char*,char*);
	void cbill(int );
	void buydish(char*,char*);
};
class food:public customer
{
	public:
	char name[100],id[100];
	int ch,ch1,ch2,ch3,ch4,ch5,ch6,ch7;
	
	float price;
	
	void setch(int a)
	{
		ch=a;
	}
	int get_ch()
	{
		return ch;
	}
	food(int);
	void login();
	void showarea();
	void adminarea();
	int showgulres();
	int showdishes();
	int showfbres();
	int shownorthres();
	void get();
	void store();
	void store(int);
	void getdata();
	void getdata(int );
	void view(int,int,int);
	void view(int,int,int,int);
	void showdata(int);
	void showdata(char*,char*);
	int showdishes(int);
	int showdishes(char);
	int showpizzahutmenu();
	int showginsoymenu();
	int showkababjeesmenu();
	int showhotnrollmenu();
	int showjavedneharimenu();
	int showkarachihaleemmenu();
	int showfbdishes();
	int showalhabibmenu();
	int showhamdardmenu();
	int showpizzacheezymenu();
	int searchdish();
	int dishcheck(string);
	void searchid(char*,int,int,int,int);
	void searchname(char*,int,int,int,int);
	void deletedish();
	void view (int,int,int,char*,char*);
	void view (int,int,int,char*,int);
	void updatedish();
	void start();
		void cart(char*,char*);
	void cart(int);
	food();

};

class admin:public food
{
public:
	
int adminlogin();	
void changepassward();	

	
};
class person
{
	public:
		virtual adminlogin()=0;
		virtual changepassward()=0;
};


food::food()
{
}
food::food(int a)
{
	
	system("COLOR 79");
	char welcome[50]="WELCOME TO";
	char welcome2[50]="   FAST EAT";
	char welcome3[50]=" DILIVERY SYSTEM";

	cout<<"\n\n\n\n\t\t\t";
	for(int wlc=0; wlc<strlen(welcome);wlc++)
	{
		cout<<" "<<welcome[wlc];
		Sleep(100);
	}
	cout<<"\n\n\t\t\t";
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++)
	{
		cout<<" "<<welcome2[wlc2];
		Sleep(100);
	}
	cout<<"\n\n\t\t\t";
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++)
	{
		cout<<" "<<welcome3[wlc3];
		Sleep(100);
	}
	cout<<"\n\n\t\t";

	Sleep(1000);
}

	void customer::signup()
		{
			customer s;
			int a;
			sd:
			system("cls");
			cout<<"\n\t\tPLEASE ENTER YOUR DETAILS :-\n";
    		cout<<"\n\t\tENTER YOUR USERNAME : ";
    		fflush(stdin);
			cin.getline(s.uname,40);
			a=checkusername(s.uname);			
			if(a==1)
			{
				fflush(stdin);
    		cout<<"\n\t\tENTER YOUR PASSWORD : ";
    		fflush(stdin);
    		cin.getline(s.upass,40);
			cout<<"\n\t\tENTER YOUR ID : ";
    		cin>>s.cid;
    		cout<<"\n\t\tENTER YOUR FIRST NAME : ";
    		fflush(stdin);
			cin.getline(s.fname,20);
			cout<<"\n\t\tENTER YOUR LAST NAME : ";
    		fflush(stdin);
			cin.getline(s.lname,20);
			cout<<"\n\t\tENTER YOUR AGE : ";
    		cin>>s.age;
			cout<<"\n\t\tENTER YOUR ADDRESS : ";
    		fflush(stdin);
			cin.getline(s.address,100);
    		fflush(stdin);
			cout<<"\n\t\tENTER YOUR PHONE NUMBER : ";
    		cin>>s.pn;
			s.bill=0;
    		fflush(stdin);
			system("cls");
			ofstream outf("customer.dat",ios::binary|ios::app);
			outf.write((char*)&s,sizeof(s));
			outf.close();
			cout<<"\n\t\tSIGNUP SUCCESSFUL\n\n\t\tPRESS ANY KEY TO CONTINUE\n\t\t";
			getch();
			food a;
			a.login();
			}
			else if (a==2)
			{
				cout<<"\n\t\tUSERNAME ALREADE EXISTS\n\n\t\tPREE ANY KEY TO TRY AGAIN\n\t\t";
				getch();
				signup();
			}
		}
 		


	int customer::checkusername(char *m)
		{
			customer s;
			char st[20],ps[20];
			int tid,i;
			char *h;
			fflush(stdin);
			h=new char[40];
			
			strcpy(h,m);
			
			fflush(stdin);
			int count=0,r=0,j=1,b=0,u=0;
        	ifstream intf("customer.dat",ios::binary);
        	intf.seekg(0);
        	if(!intf)
                {
                	return 1;
				}
        	while(!intf.eof())
			{
			
				if(strcmp(s.uname,h)==0)
        		{
					u++;
        			return 2;
        			
				}
				intf.read((char*)&s,sizeof(s));
			}
			if(u==0)
			{
				return 1;
			}
		}
	









void food::start()
	{
			system("cls");
		int a;
	cout<<"1-login\n2-sign up\n3-exit\n\n";
	cout<<"enter choice:";
	cin>>a;
	setch(a);
	if(get_ch()==1)
	{
			login();	
		
	}
	else if(get_ch()==2)
		{
		
	signup();
		}
		
		else if(get_ch()==3)
		{
			exit(1);
			}	
}
	
	void food::login()
	
{	
		system("cls");
customer s;
	int cho,c,a;
	system("cls");
	int b;
	cout<<"login as:\n\n1-admin\n2-customer\n3-go back\n";
	cout<<"\nenter your choice:";
	cin>>cho;
	if(cho==1)
		{	
		admin a;
		b=a.adminlogin();
		if(b==1)
		{
				for (int i=15;i<=100;i+=10)
					{
						system("cls");
						cout<<"\n\n\n\n\n\n\n\t\t\t";
						cout<<"WELCOME ADMIN""\n\t\t\t\t"<<endl;
						cout<<"\t\t\tLOADING "<<i<<"%\n\n\t\t";
        				Sleep(100);
					}
			adminarea();
		}
	}
	if(cho==2)
	{
			
		customerlogin();
}

if(cho==3)
{
	start();
}
}


int customer::customerlogin()
{
		system("cls");
	customer s;
	int a=0;
	char suname[40],spass[40];
	fflush(stdin);
	cout<<"ENTER YOUR USERNAME :";
	cin>>suname;
		cout<<"ENTER YOUR PASSWARD :";
	cin>>spass;
	
	ifstream fin("customer.dat",ios::in|ios::binary);
	fin.seekg(0);
	        fin.read((char*)&s,sizeof(s));
			
			if(!fin)
			{
				return 0;
				}	
                        
        while(!fin.eof())
		{
			if(strcmp(suname,s.uname)==0 && strcmp(spass,s.upass)==0)
			{
			
				
		for (int i=15;i<=100;i+=10)
					{
						system("cls");
						cout<<"\n\n\n\n\n\n\n\t\t\t";
						cout<<"WELCOME "<<s.fname<<"\n\t\t\t\t"<<endl;
						cout<<"\t\t\tLOADING "<<i<<"%\n\n\t\t";
        				Sleep(100);
					}
			customermenu(suname,spass);	
		}
		 fin.read((char*)&s,sizeof(s));	
			
						}                
               if(a==0)
               
               
               
			   {
			   
			   
			 
				cout<<"\t\tYOU DONT HAVE AN ACCOUNT.YOU HAVE TO SIGN UP FIRST.\n\n\t\tpress 1 to sign up\n\t\t press 2 to exit.\n\n\t\t ENTER YOUR CHOICE : ";
				cin>>a;
				switch(a)
				{
					case 1:
						signup();
						break;
					case 2:
						exit(1);
						break;
				}
							
			}         
                        
                    
   
	
	
	
}


void customer:: customermenu(char *a,char *b)
{
	
		system("cls");
	int d;
	cout<<"\n1-view resturant and food list\n2-search a dish from all available restaurants\n3-buy from a restraunt\n4-view your cart\n5-go back\n\nenter your choice:";
	cin>>d;
	food c;
		if(d==1)
	{
		
	c.showdata(2);
	customermenu(a,b);	
	}
	
		if(d==2)
	{
	c.searchdish();
	
	customermenu(a,b);	
	}
	if(d==3)
	{
		buydish(a,b);
		
		
	}
	if(d==4)
	{
		food d;
		d.cart(a,b);
		
	}
	if(d==5)
	{
		food c;
		
		c.login();
	}
	
	
}



void customer:: buydish(char *a,char *b)
{

	customer s;
food c;
	c.showdata(a,b);
	

	
	
	
	
}
void food::showdata(char *a,char *b)
{
		system("cls");
	int c,e;
  	cout<<"1-GULSHAN\n2FB-AREA\n3-NORTH NAZIMABAD\n";
  	cout<<"enter choice: ";
    	
 	 cin>>ch1;
 	 
 	if(ch1==1)
	{
		ch2=showgulres();	
			if(ch2==1)
		{
				ch3=showpizzahutmenu();
				
				view(ch1,ch2,ch3,a,b);
				
		}
			else if(ch2==2)
		{
				ch3=showginsoymenu();
					view(ch1,ch2,ch3,a,b);
		}
			else if(ch2==3)
		{
			ch3=showkababjeesmenu();
					view(ch1,ch2,ch3,a,b);
		}


}

else if(ch1==2)
{
	ch2=showfbres();
		
			if(ch2==1)
		{
				ch3=showhotnrollmenu();
					view(ch1,ch2,ch3,a,b);
		}
			else if(ch2==2)
		{
			ch3=	showkarachihaleemmenu();
					view(ch1,ch2,ch3,a,b);
		}
			else if(ch2==3)
		{
			ch3=showjavedneharimenu();
				view(ch1,ch2,ch3,a,b);	
		}
	
	
	
	
}
else if(ch1==3)
{
	ch2=shownorthres();
		
			if(ch2==1)
		{
				ch3=showpizzacheezymenu();
					view(ch1,ch2,ch3,a,b);
		}
			else if(ch2==2)
		{
				ch3=showhamdardmenu();
					view(ch1,ch2,ch3,a,b);
		}
			else if(ch2==3)
		{
			ch3=showalhabibmenu();
				view(ch1,ch2,ch3,a,b);	
		}

}

	
	
}


void food::view(int b,int c,int d,char *e,char *f)

{
		system("cls");
	customer s;
int t,n;
	
	char named[40];
	int r=1;
	int g=0,op;
	char q;
 	
 	static int h;
	cout<<ch1<<ch2<<ch3;
	op:
	 ifstream fin;
	
	 fin.open("food.dat",ios::in|ios::binary);
	 
	  fin.read((char*)this,sizeof(*this));
	  
	 while(!fin.eof())
	 {
	 if(ch1==b&&ch2==c&&ch3==d)
	{
	cout<<"\t\t------------"<<r<<"-------------\n";
				get();
				r++;
	}
		 fin.read((char*)this,sizeof(*this));
	}
	 fin.close();
	 fin.open("food.dat",ios::in|ios::binary);
	 
	   
	cout<<"ENTER THE NAME OF DISH YOU WISH TO BUY";
	fflush(stdin);
	cin.getline(named,39);
	fin.seekg(0);
		ofstream fout;
		 fout.open("bought.dat",ios::app);

	fin.read((char*)this,sizeof(*this));
		 while(!fin.eof())
	 {
	 if(ch1==b&&ch2==c&&ch3==d && strcmp(named,name)==0)
	{
				
		cout<<"\t\tITEM SUCCESFULLY BOUGHT\n\n";
				h=h+price;
				s.bill=h;
				g++;
			fout<<name<<endl;
			fout<<id<<endl;
			fout<<price<<endl;
		
		
				
	}
		 fin.read((char*)this,sizeof(*this));
	}
	
	fout.close();
	
	if(g==0)
	{
			cout<<"\n\t\tNO ITEM FOUND\n\t\tPRESS ANY KEY TO TRY AGAIN\n\t\t";
				fflush(stdin);
				getch();
				fflush(stdin);
				system("cls");
				goto op;	
		
	}
	
	

		
	
	
	n:
		cout<<"\n\n\t\tDO YOU WANT TO  ADD ANOTHER (Y/N)\n";
			cin>>q;
			
			if(q=='y'||q=='Y')
			{
				showdata(e,f);
			}
			else if(q=='n'||q=='N')
			{
				system("cls");
				cout<<"\n\t\tPLEASE WAIT AS YOUR BILL IS BEING GENERATED\n";
					Sleep(200);
				Beep(1500,800);
			
			cout<<"\n\n\n\t\tYOUR BILL IS: "<<h<<"\n\nYour order will be delivered in 30 minutes.";	
				s.bill=h;
				ofstream outf("customer.dat",ios::app|ios::binary);
				outf.write((char*)&s,sizeof(s));
				outf.close();
				cout<<"\n\n\n\t\tPRESS ANY KEY TO CONTINUE......";
        		getch();
        		system("cls");
        		
				customermenu(e,f);
							
			}
			else
			{
				goto n;
			}
		
			}
				
	
	
	void customer::cbill(int a)
	{
	customer s;	
	

			cout<<"\n\n\n\t\tYOUR BILL IS: "<<s.bill;
				s.bill=a;
				ofstream outf("customer.dat",ios::binary|ios::app);
				outf.write((char*)&s,sizeof(s));
				outf.close();
	}
	
	void food::store(int a)
{
	ofstream fout;
	 fout.open("bought.dat",ios::app|ios::binary);
	fout.write((char*)this,sizeof(*this));
	 fout.close();
	
}
		
void food::cart(char *a,char *b)
{
		system("cls");
	customer s;
		char *h,*k;
			fflush(stdin);
			h=new char[40];
			k=new char[40];
			strcpy(h,a);
			fflush(stdin);
			strcpy(k,b);
string c,d,e;
int j=1;
	ifstream file,file1;
	file1.open("customer.dat",ios::in|ios::binary);

	file1.read((char*)&s,sizeof(s));
	while(!file1.eof())
	{
		
	
	if((strcmp(h,s.uname)==0) && (strcmp(k,s.upass)==0))
	{
	
	cout<<"\n\t\tNAME: "<<s.uname<<" "<<s.uname<<endl<<"\n\t\tID: "<<s.cid<<endl<<"\n\t\tAGE: "<<s.age<<"\n\n\t\tADDRESS: "<<s.address<<"\n\n\t\tPHONE NUMBER: +92"<<s.pn<<endl<<endl;
}


file1.read((char*)&s,sizeof(s));
}
file1.close();

	cout<<"\n--------------------------BILL NO. "<<j<<"------------------------\n";
file.open("bought.dat",ios::in|ios::binary);
file.seekg(0);
	ifstream file2;


while(file)

{
	
fflush(stdin);
 getline(file,c);
  cout<<"\n\t\tDish Name : "<<c<<endl;
 getline(file,d);
  cout<<"\n\t\tDish IDs : "<<d<<endl;
 getline(file,e);
   cout<<"\n\t\tDish Price : "<<e<<endl;

}

cout<<"\n\n\n";
	file2.open("customer.dat",ios::in|ios::binary);
file2.read((char*)&s,sizeof(s));
	
	cout<<s.bill;

			cout<<"\n\t\tPRESS ANY KEY TO CONTINUE......";
        	getch();
	customermenu(a,b);
	
}		


		
void food::cart(int a)
		{
		system("cls");
customer s;
	ifstream file;
	string c,d,e;
	file.open("bought.dat",ios::in|ios::binary);
	file.seekg(0);
	ifstream file2;
	file2.open("customer.dat",ios::in|ios::binary);
	while(!file.eof())

{
	
	if(!file)
	{
		cout<<"NO FILE EXIST";
		break;
	}
	else{
	
	
fflush(stdin);
 getline(file,c);
 getline(file,d);
 getline(file,e);



	 cout<<"\n\t\tDish Name : "<<c<<endl;
    cout<<"\n\t\tDish IDs : "<<d<<endl;
    cout<<"\n\t\tDish Price : "<<e<<endl;

}}
file2.read((char*)&s,sizeof(s));
			cout<<"\n\t\tPRESS ANY KEY TO CONTINUE......";
        	getch();
cout<<"\n\n\n";


food r;
r.adminarea();
	
}	
	


int admin::adminlogin()

{
		system("cls");
	int ch;
	
	start:
		
	string user,pass,a,b;
	
	
	cout<<"\n\t\tENTER ADMIN USERNAME : ";
	cin  >> user;
   cout<<"\n\t\tENTER ADMIN PASSWORD : ";
	ch = getch();
	
	while (ch !=13)
	
	{
		pass.push_back(ch);
		cout << '*';
		ch =getch();
	}
	

	
	ifstream intf,inf; 
	intf.open("username.dat",ios::in);
	inf.open("passward.dat",ios::in);
	getline(intf,a);
	
	getline(inf,b);
	
	if (user ==a && pass == b)
	{
		return 1;
	}
       	
    
    else
    {
        cout<<"\n\n\t\tWRONG PASSWORD.\n\n\t\tPRESS ANY KEY TO TRY AGAIN.....\n";
        getch();
        system("cls");
        goto start;
    }
}



void admin::changepassward()
{
		system("cls");
	string a,b;
	char c[40];
	 int g,h;
    system("cls");
    h:
    cout<<"\n\n\t\tENTER OLD PASSWORD : ";
    fflush(stdin);
   getline(cin,a);
   
   ifstream file("passward.dat",ios::in|ios::binary);

   getline(file,b);
   if(a==b)
   {
   	   ofstream fout ("passward.dat",ios::out|ios::binary);
   	cout<<"\n\n\tSET YOUR NEW PASSWARD : ";
   	  fflush(stdin);
   cin.getline(c,39);
   fout<<c;
   		fout.close();
   }
   else
   {
   	
   	cout<<"\tYOU ENTERED THE WRONG PASSWARD\n\nPRESS 1 TO TRY AGAIN AND PRESS 2 TO RETURN TO MAIN MENU\nENTER CHOICE: ";
   	cin>>g;
   	if(g==1)
   	{
   		
		   goto h;

	}
	else if(g==2)
	{
			file.close();
	fflush(stdin);
	}
   	
   }


	
}

void food:: adminarea()


{
		system("cls");
	
	cout<<"\t\t\tWELCOME HAMZA\n\n";
	
	int a;
	cout<<"\n1-add dish\n2-display all restaurant\n3-search a dish from all restaurant\n4-update a dish in a restaurant\n5-delete a dish from a restaurant\n6-change your passward\n7-items sold history\n8-go back\n\nenter your choice:";
	cin>>a;
 
 			if(a==1)
	{
		showarea();
		adminarea();
	}
	if(a==2)
	{
		showdata(2);
		adminarea();
		
	}
		if(a==3)
	{
		searchdish();
		adminarea();
		
	}
		if(a==4)
	{
		
		updatedish();
		adminarea();
	}
	
	if(a==5)
	{
		
		deletedish();
	
	}
	if(a==6)
	{
		
		admin a;
		a.changepassward();
	adminarea();
	}
	if(a==7)
	{
		cart(1);
	}
		if(a==8)
	{login();
}

}

void food::updatedish()
{	system("cls");
	char st1[100];
			int i;
			int r;
			int o;
			cout<<"\n\t\tDO YO WANT TO\n\t\t1. SEARCH BY PRODUCT NAME\n\t\t2. SEASRCH BY PRODUCT ID\n";
			cin>>o;
			if(o==1)
			{
				system("cls");
            cout<<"\n\t\tENTER PRODUCT NAME: ";
            fflush(stdin);
        	cin.getline(st1,100);
            system("cls");
            cout<<"\n\t\tDO YOU WANT TO\n\t\t1. UPDATE THE PRICE\n\t\t2. UPDATE THE COMPLETE ITEM\n";
            int t;
            cin>>t;
            if (t==1)
            {
            	system("cls");
            	fstream intf("food.dat",ios::in|ios::out|ios::ate|ios::binary);
            intf.seekg(0);
            intf.read((char*)this,sizeof(*this));
            while(!intf.eof())
            {
            	if(strcmp(st1,name)==0)
                    {
                    	fflush(stdin);
                    	r++;
                    	cout<<"\n\t\tENTER THE NEW PRICE\n";
                        cin>>price;
                              intf.seekp(intf.tellp()-sizeof(this));
                        intf.write((char*)&price,sizeof(price));
                        break;
                    }
                        intf.read((char*)this,sizeof(*this));
                                    
			}
                intf.close();
                if(r==0)
                {
                	cout<<"\n\t\tITEM NOT FOUND\n";
				}
				else
				{
					cout<<"\n\n\t\tITEM SUCCESSFULLY UPDATED\n";
				}
				cout<<"\n\t\tENTER 1 TO RETURN TO MENU OR 0 TO EXIT\n";
			int e;
			cin>>e;
			if(e==1)
			{
				adminarea();
			}
			else if(e==0)
			{
				exit(1);
			}
        	}
			else if (t==2)
			{
				fstream intf("food.dat",ios::in|ios::out|ios::ate|ios::binary);
            intf.seekg(0);
            intf.read((char*)this,sizeof(*this));
            while(!intf.eof())
            {
            	if(!strcmp(st1,name))
                    {
                    	r++;
                        getdata(2);
                         intf.seekp(intf.tellp()-sizeof(*this));
                        intf.write((char*)this,sizeof(*this));
                        break;
                    }
                        intf.read((char*)this,sizeof(*this));
                                    
			}
                intf.close();
                if(r==0)
                {
                	cout<<"\n\n\t\tITEM NOT FOUND\n";
				}
				else
				{
					cout<<"\n\n\t\tITEM SUCCESSFULLY UPDATED\n";
				}
			}
			cout<<"\n\n\t\tENTER 1 TO RETURN TO MENU OR 0 TO EXIT\n";
			int e;
			cin>>e;
			if(e==1)
			{
				adminarea();
			}
			else if(e==0)
			{
				exit(1);
			}
			}
            
			
			else if(o==2)
			{
				system("cls");
				char id1[40];
            cout<<"\n\t\tENTER PRODUCT ID: ";
            fflush(stdin);
            cin.getline(id1,39);
            system("cls");
            cout<<"\n\t\tDO YOU WANT TO\n\t\t1. UPDATE THE PRICE\n\t\t2. UPDATE THE COMPLETE ITEM\n";
            int t;
            cin>>t;
            if (t==1)
            {
            	system("cls");
            	fstream intf("food.dat",ios::in|ios::out|ios::ate|ios::binary);
            intf.seekg(0);
            intf.read((char*)this,sizeof(*this));
            while(!intf.eof())
            {
                    if(strcmp(id,id1)==0)
                    {
                    	r++;
                    	cout<<"\n\t\tENTER THE NEW PRICE\n";
                        cin>>price;
                          intf.seekp(intf.tellp()-sizeof(this));
                        intf.write((char*)&price,sizeof(price));
                        break;
                    }
                        intf.read((char*)this,sizeof(*this));
                                    
			}
			 intf.close();
                if(r==0)
                {
                	cout<<"\n\t\tITEM NOT FOUND\n";
				}
				else
				{
					cout<<"\n\n\t\tITEM SUCCESSFULLY UPDATED\n";
				}
				cout<<"\n\t\tENTER 1 TO RETURN TO MENU OR 0 TO EXIT\n";
			int e;
			cin>>e;
			if(e==1)
			{
				adminarea();
			}
			else if(e==0)
			{
				exit(1);
			}
		}
			else if(t==2)
			{
				fstream intf("food.dat",ios::in|ios::out|ios::ate|ios::binary);
            intf.seekg(0);
            intf.read((char*)this,sizeof(*this));
            while(!intf.eof())
            {
                  if(strcmp(id,id1)==0)
                    {
                    	r++;
                        getdata(2);
                     intf.seekp(intf.tellp()-sizeof(*this));
                        intf.write((char*)this,sizeof(*this));
                        break;
                    }
                        intf.read((char*)this,sizeof(*this));
                                    
			} intf.close();
                if(r==0)
                {
                	cout<<"\n\t\tITEM NOT FOUND\n";
				}
				else
				{
					cout<<"\n\n\t\tITEM SUCCESSFULLY UPDATED\n";
				}
			}
            
             cout<<"\n\n\t\tENTER 1 TO RETURN TO MENU OR 0 TO EXIT\n";
			int e;
			cin>>e;
			if(e==1)
			{
				adminarea();
			}
			else if(e==0)
			{
				exit(1);
			}  
			}
				

}

				
				
void food::getdata(int a)
{
		system("cls");
string t;
int i;
	cout<<"enter new name: ";
		fflush(stdin);
	cin.getline(name,100); 

	fflush(stdin);
		fflush(stdin);
	cout<<"enter new dish ID: ";
 	cin.getline(id,100); 
 			fflush(stdin);
	cout<<"enter new price for 1 kg: ";
	cin>>price;
	
	}
	
	void food::getdata()
{
		system("cls");
string t;
int i,a;
	cout<<"enter name: ";
		fflush(stdin);
	cin.getline(name,100); 

	fflush(stdin);
		fflush(stdin);
	cout<<"enter dish ID: ";
 	cin.getline(id,100); 
 			fflush(stdin);
	cout<<"enter price for 1 kg: ";
	cin>>price;
	
	
	
	store();
	
	
	}


void food::deletedish()
{
		system("cls");

	char l[100];
			int i;
			int o;
			cout<<"\n\t\tDO YO WANT TO\n\t\t1. SEARCH BY PRODUCT NAME\n\t\t2. SEASRCH BY PRODUCT ID\n";
			cin>>o;
			system("cls");
			if(o==1)
			{
			cout<<"\n\t\tNAME OF THE PRODUCT YOU WANT TO DELETE?\n";
			fflush(stdin);	
			cin.getline(l,100);
			int r=0;
			ifstream intf;
            ofstream outf("temp.dat",ios::app|ios::binary);
			intf.open("food.dat",ios::in|ios::binary);
			intf.seekg(0);
			intf.read((char*)this,sizeof(*this));
			while(!intf.eof())
			{
		if(strcmp(l,name)==0)
			{
				r++;
				intf.read((char*)this,sizeof(*this));

			}
			else
             {
              outf.write((char*)this,sizeof(*this));
				intf.read((char*)this,sizeof(*this));
             }
			
			}
			intf.close();
            outf.close();
			remove("food.dat");
            rename("temp.dat","food.dat");
			
			if(r==0)
			{
				cout<<"\n\t\tRECORD NOT FOUND\n";
			}
			else if(r>0)
			{
				cout<<"\n\t\tITEM SUCCESSFULLY DELETED\n";
			}
			intf.close();
			cout<<"\n\t\tENTER 1 TO RETURN TO MENU OR 0 TO EXIT\n";
			int e;
			cin>>e;
			if(e==1)
			{
				adminarea();
			}
			else if(e==0)
			{
				exit(1);
			}
			}
			else if(o==2)
			{
				fflush(stdin);
				char id1[40];
				system("cls");
				cout<<"\n\t\tID OF THE PRODUCT YOU WANT TO SEARCH?\n";	
			cin.getline(id1,39);
			int r=0;
			ifstream intf;
            ofstream outf("temp.dat",ios::app|ios::binary);
			intf.open("food.dat",ios::in|ios::binary);
			intf.read((char*)this,sizeof(*this));
			while(!intf.eof())
			{
		 if(strcmp(id,id1)==0)
			{
				r++;
				intf.read((char*)this,sizeof(*this));

			}
			else
             {
              outf.write((char*)this,sizeof(*this));
				intf.read((char*)this,sizeof(*this));
             }
			
			}
			intf.close();
            outf.close();
			remove("food.dat");
            rename("temp.dat","food.dat");
			
			if(r==0)
			{
				cout<<"\n\t\tRECORD NOT FOUND\n";
			}
			else if(r>0)
			{
				cout<<"\n\t\tITEM SUCCESSFULLY DELETED\n";
			}
			intf.close();
			}
		cout<<"\n\t\tENTER 1 TO RETURN TO MENU OR 0 TO EXIT\n";
			int r;
			cin>>r;
			if(r==1)
			{
				adminarea();
			}
			else if(r==0)
			{
				exit(1);
			}
			
		}


int food::searchdish()
{	system("cls");
		int c,e,f;
  	cout<<"1-GULSHAN\n2FB-AREA\n3-NORTH NAZIMABAD\n";
  	cout<<"enter choice: ";
    	
 	 cin>>ch1;
 	 
 	if(ch1==1)
	{
		ch2=showgulres();	
			if(ch2==1)
		{
				ch3=showpizzahutmenu();
				
				view(ch1,ch2,ch3,1);
				
		}
			else if(ch2==2)
		{
				ch3=showginsoymenu();
					view(ch1,ch2,ch3,1);
		}
			else if(ch2==3)
		{
			ch3=showkababjeesmenu();
					view(ch1,ch2,ch3,9);
		}


}

else if(ch1==2)
{
	ch2=showfbres();
		
			if(ch2==1)
		{
				ch3=showhotnrollmenu();
					view(ch1,ch2,ch3,9);
		}
			else if(ch2==2)
		{
			ch3=	showkarachihaleemmenu();
					view(ch1,ch2,ch3,9);
		}
			else if(ch2==3)
		{
			ch3=showjavedneharimenu();
				view(ch1,ch2,ch3,9);	
		}
	
	
	
	
}
else if(ch1==3)
{
	ch2=shownorthres();
		
			if(ch2==1)
		{
				ch3=showpizzacheezymenu();
					view(ch1,ch2,ch3,9);
		}
			else if(ch2==2)
		{
				ch3=showhamdardmenu();
					view(ch1,ch2,ch3,9);
		}
			else if(ch2==3)
		{
			ch3=showalhabibmenu();
				view(ch1,ch2,ch3,9);	
		}

}

	
	
}
	
	
	

			
			
			
			




void food::showarea()
{
		system("cls");
	int b,c,d;
  	cout<<"1-GULSHAN\n2FB-AREA\n3-NORTH NAZIMABAD\n";
  	cout<<"enter choice: ";
  	
  	cin>>ch1;
	
	if(ch1==1)
	{
		ch2=showgulres();	
		if(ch2==1)
		{
			ch3=showdishes();
				
		}
			else if(ch2==2)
		{
			ch3=showdishes();
				
		}
			else if(ch2==3)
		{
			ch3=showdishes();
				
		}
			else if(ch2==4)
		{
			ch3=showdishes();
				
		}
		
	}
		else if(ch1==2)
	{
		ch2=showfbres();	
		if(ch2==1)
		{
			
				ch3=showdishes();	
		}
			else if(ch2==2)
		{
			ch3=showdishes();
				
		}
			else if(ch2==3)
		{
			ch3=showdishes();
				
		}
			else if(ch2==4)
		{
				ch3=showdishes();
				
		}
		
	}
			else if(ch1==3)
	{
		ch2=shownorthres();	
		if(ch2==1)
		{
			
				ch3=showdishes();	
		}
			else if(ch2==2)
		{
			ch3=showdishes();
				
		}
			else if(ch2==3)
		{
			ch3=showdishes();
				
		}
			else if(ch2==4)
		{
				ch3=showdishes();
				
		}
		
	}
	

	getdata();
	
}
void food::showdata(int a)
{
		system("cls");
	int c,e,f;
  	cout<<"1-GULSHAN\n2FB-AREA\n3-NORTH NAZIMABAD\n";
  	cout<<"enter choice: ";
    	
 	 cin>>ch1;
 	 
 	if(ch1==1)
	{
		ch2=showgulres();	
			if(ch2==1)
		{
				ch3=showpizzahutmenu();
				
				view(ch1,ch2,ch3);
				
		}
			else if(ch2==2)
		{
				ch3=showginsoymenu();
					view(ch1,ch2,ch3);
		}
			else if(ch2==3)
		{
			ch3=showkababjeesmenu();
					view(ch1,ch2,ch3);
		}


}

else if(ch1==2)
{
	ch2=showfbres();
		
			if(ch2==1)
		{
				ch3=showhotnrollmenu();
					view(ch1,ch2,ch3);
		}
			else if(ch2==2)
		{
			ch3=	showkarachihaleemmenu();
					view(ch1,ch2,ch3);
		}
			else if(ch2==3)
		{
			ch3=showjavedneharimenu();
				view(ch1,ch2,ch3);	
		}
	
	
	
	
}
else if(ch1==3)
{
	ch2=shownorthres();
		
			if(ch2==1)
		{
				ch3=showpizzacheezymenu();
					view(ch1,ch2,ch3);
		}
			else if(ch2==2)
		{
				ch3=showhamdardmenu();
					view(ch1,ch2,ch3);
		}
			else if(ch2==3)
		{
			ch3=showalhabibmenu();
				view(ch1,ch2,ch3);	
		}

}

	
	
}

	

		
void food::store()
{
	ofstream fout;
	 fout.open("food.dat",ios::app|ios::binary);
	fout.write((char*)this,sizeof(*this));
	 fout.close();
	
}

void food::view(int b,int c,int d)
{
		system("cls");
	int r=1;
	cout<<"\t\t*************MENU**************\n\n\n";
	 ifstream fin;
	 fin.open("food.dat",ios::in|ios::binary);
	  fin.read((char*)this,sizeof(*this));
	 while(!fin.eof())
	 {
	 if(ch1==b&&ch2==c&&ch3==d)
	{cout<<"\t\t------------"<<r<<"-------------\n";
				get();
				r++;
	}
		 fin.read((char*)this,sizeof(*this));
	}
	 fin.close();
					cout<<"\n\n\n\t\tPRESS ANY KEY TO CONTINUE......";
        		getch();
        		system("cls");
	

}
void food::view(int b,int c,int d,int f)
{
		system("cls");
	int r=1;
		char sname[100],sid[100];
	int a,i;
	int e=0;
	
	      cout<<"\n\t\tPlease Choose one option :-\n";
      cout<<"\n\t\t1.Search By Name\n\n\t\t2.Search By Dish ID\n";
      cout<<"\n\t\tEnter Your Choice : ";
      cin>>a;
      		ifstream file;
		file.open("food.dat",ios::binary);
      fflush(stdin);
    
      if(a==1)
      {
      	  
          cout<<"\n\t\tEnter Dish Name : ";
          cin.getline(sname,100);
          searchname(sname,b,c,d,f);
      }
         
      if(a==2)
      {
      
          cout<<"\n\t\tEnter Dish ID : ";
          cin.getline(sid,100);
          searchid(sid,b,c,d,f);
      }
          
          
      

}





	void food::searchname(char* a,int b ,int c,int d,int f)
	{
			system("cls");
		int e=0;
		
		ifstream file;
		file.open("food.dat",ios::in|ios::binary);
		
		file.read((char*)this,sizeof(*this));
	 while(!file.eof())
          {
        
          
            if(strcmp(a,name)==0&&ch1==b&&ch2==c&&ch3==d)
                {
                        cout<<"\n\t\tDish Found :-\n";
                        get();
                        e++;
                        break;
                }
             file.read((char*)this,sizeof(*this));
             
          }
          		if(e==0)
			{
				cout<<"\n\n\t\tRECORD NOT FOUND\n";
				
			}
			file.close();
			cout<<"\n\n\t\tENTER ANY KEY TO GO TO MENU\n";
			getch();
			
	
			
			
      }
      	
		
	
	 
		void food:: searchid(char* a,int b ,int c,int d,int f)
	{
			system("cls");
	int e=0;
	ifstream file;
		file.open("food.dat",ios::in|ios::binary);
		
			 file.read((char*)this,sizeof(*this));
		while(!file.eof())
          {
        
          
            if(strcmp(a,id)==0&&ch1==b&&ch2==c&&ch3==d)
                {
                        cout<<"\n\t\tDish Found :-\n";
                        get();
                        e++;
                        break;
                }
             file.read((char*)this,sizeof(*this));
             
          }
          		if(e==0)
			{
				cout<<"\n\n\t\tRECORD NOT FOUND\n";
				
			}
			file.close();
			cout<<"\n\n\t\tENTER ANY KEY TO GO TO MENU\n";
			getch();
			
      	
	  }
		
	
	 	
	
	



 

	void food::get()
		{
				
			
	 cout<<"\n\t\tDish Name : "<<name<<endl;
    cout<<"\n\t\tDish IDs : "<<id<<endl;
    cout<<"\n\t\tDish Price : "<<price<<endl;
 		}


  

	
  int food::showgulres()
  {	system("cls");
  	
  	cout<<"1-PIZZA HUT\n2-GINSOY\n3-KABABJEES\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  	return ch3;
	} 	
	
  int food::showdishes()
  {	system("cls");
  	
  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  		cout<<"enter choice: ";
  	cin>>ch3;
  	return ch3;
} 	
  int food::showfbres()
  {	system("cls");
  	
  	cout<<"1-HOT n ROLL\n2-KARACHI HALEEM\n3-JAVED NEHARI\n";
  		cout<<"enter choice: ";
  	cin>>ch3;
  	return ch3;
	} 
	  int food::shownorthres()
  {
  		system("cls");
  	cout<<"1-PIZZA CHEEZY\n2-HAMDARD\n-AL-HABIB\n";
  		cout<<"enter choice: ";
	  cin>>ch3;
  	return ch3;
	} 		
  int food::showfbdishes()
  {	system("cls");
  	
  	cout<<"1-STARTERrrr\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  		cout<<"enter choice: ";
  	cin>>ch3;
  	return ch3;
} 
  int food::showdishes(char a)
  {	system("cls");
  	
  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  		cout<<"enter choice: ";
  	cin>>ch4;
  	return ch4;
}

int food::showpizzahutmenu()
{
	  		system("cls");
  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  }  

  }  
  int food::showginsoymenu()
{
	  		system("cls");
  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  }  

  }  
    int food::showkababjeesmenu()
{
	  		system("cls");
  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  		   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  }  

  }  
    int food::showhotnrollmenu()
  {
  		system("cls");
  	  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  }  
  	
  	
	}
		  int food::showkarachihaleemmenu()
  {
  		system("cls");
  	  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  } 
  	
  	
	}
	  
	  	  int food::showjavedneharimenu()
  {
  		system("cls");
  	  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  }  
  	
  	
	}
		  	  int food::showpizzacheezymenu()
  {
  		system("cls");
  	  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  }   
  	
  	
	}
			  	  int food::showhamdardmenu()
  {	system("cls");
  	
  	  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  }  
  	
  	
	}
int food::showalhabibmenu()
  {	system("cls");
  	
  	  	cout<<"1-STARTER\n2-MAIN COURSE\n3-SWEET\n4-DRINKS\n";
  	cout<<"enter choice: ";
  	cin>>ch3;
  	   if(ch3==1)
  	{	return 1;
  				
	  }
	  if(ch3==2)
	  {	return 2;
	  	
	  }
	  if(ch3==3)
	  {	return 3;
	  
	  }
	  if(ch3==4)
	  {	return 4;
	  	
	  } 
  	
  	
	}
    





int main()
{
	
	
	food a(1);
	a.start();
	
	
}
