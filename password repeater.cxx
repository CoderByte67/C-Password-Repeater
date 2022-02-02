//CoderByte67

#include<iostream>
using namespace std;
int main(){
	string pass1,pass2,pass3,pass4;
	
	
	cout<<"\n\n\n";
cout<<"--------------------------------------------------------------------\n";
cout<<"P A S S W O R D    R E P E A T E R   B Y  CoderByte67";
cout<<"\n--------------------------------------------------------------------\n";
	
	
	//NEW PASSWORD ....
	cout<<"\n\n\n";
	cout<<"NEW PASSWORD ; ";
    cin>>pass1;
   //CONFIRM PASSWORD
   cout<<"\n\n\n";
   cout<<"Confirm password.";
   cin>>pass2;
   cout<<"\n\n\n";
   if (pass1==pass2){cout<<"\n\n\n";
   	cout<<"Congrats.......";cout<<"\n\n\n";
   }
   else {
   	
   	//FOR REPEATITION 
   	while (pass1!=pass2)
   	{cout<<"\n\n\n";	cout<<"Re-Enter  NEW  password ; ";
   cin>>pass3;
   cout<<"\n\n\n";
   cout<<"Confirm password.";
   cin>>pass4;
   if (pass3==pass4){cout<<"\n\n\n";cout<<" ACCOUNT CREATED .....";break;}
   else {continue;
   	}
   	return 0;
   }
}
//END CREDITS....
cout<<"\n\n\n";
cout<<"--------------------------------------------------------------------\n";
cout<<"PROGRAM DEVELOPED BY :- HAMZA JAVAID aka CoderByte67";
cout<<"\n--------------------------------------------------------------------";


}
