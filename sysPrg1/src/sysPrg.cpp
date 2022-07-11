


#include"sysPrg.h"

using namespace std;

int main( int argc ,char* argv[])     //command line argument to print natural numbers

{         
int x;

 cout<<" enter the total number of natural number"<<argc<<endl;
 cout<<"here is the list of natural numbers"<<endl;
		 
	       
   for(int i =0 ;i<=argc ;i++)
			           
	 {
	       	 cout<<argv[i]<<endl;
	 }

	
 int pid = fork();                                                 //process of child and parents start
	 if(pid == 0)                                                       //child class condition
		    {      
			    cout<<"\n child class start:"<<endl;                 
			    wait(0);                                            //waiting for the execution of child class
			    for(i=1; i<=argc ; i++)

				    if(i%2!=0)
					    cout<<"odd numbers:"<<argv[i]<<endl;
		    }

	 else
	           {          
			   cout<<"\nparents class start:"<<endl;
			   if(pid>0)
			   {
				  wait(0);
			          for(i=1; i<=argc; i++)
				   if(i%2==0)
			           cout<<"even numbers:"<<argv[i]<<endl;
			   }
		   }

	 return 0;
}

