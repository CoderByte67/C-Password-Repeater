#include<iostream>
using namespace std;
int main(){
	string pass1,pass2,pass3,pass4;
	cout<<"Enter password ; ";
   cin>>pass1;
   
   cout<<"Confirm password.";
   cin>>pass2;
   
   if (pass1==pass2){
   	cout<<"Congrats.......";
   }
   else {
   	while (pass1!=pass2)
   	{	cout<<"Re-Enter password ; ";
   cin>>pass3;
   
   cout<<"Confirm password.";
   cin>>pass4;
   if (pass3==pass4){cout<<" ";break;}
   else {continue;
   	}
   	return 0;
   }
}
}