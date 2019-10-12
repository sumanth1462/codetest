#include<iostream>
using namespace std;
#include<math.h>
#include<fstream>
#include<string.h>
#include<conio.h>
string name;
long long int num;
class real_estate_advisor
{
	private:
		int price;
		int rooms;
		int select;
		int option;
		int choice;
		int land;
		int payment;
		int mode;
		int loan;
		int EMI;
		float r;
		int t;
		public:
			void details();
			void get();
};
void real_estate_advisor::details()
{
	cout<<"Enter your name :";
//	fflush(stdin);
	getline(cin,name);
	cout<<"Enter your number :";
	cin>>num;
}
 void real_estate_advisor::get()
 {
 	ofstream fout;
 	fout.open("Seva.txt");
 	cout<<"select the type of choice needed:"<<endl;
 	cout<<"1 for house"<<endl;
 	cout<<"2 for land"<<endl;
 	cout<<"enter choice"<<endl;
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 			cout<<"select 1 for new house:"<<endl;
 			cout<<"select 2 for rented house:"<<endl;
 			cout<<"enter option:"<<endl;
 			cin>>option;
 			switch(option)
 			{
 				case 1:
 			     if(option=1)
 			     {
 				   cout<<"select type of house"<<endl;
 				   cout<<"1 for duble_store_building"<<endl;
 				   cout<<"2 for single_store_building"<<endl;
 				   cout<<"3 for duplex"<<endl;
 				   cout<<"enter value to select"<<endl;
 				   cin>>select;
 				   switch(select)
 				   {
 				    case 1:	
 				     if(select=1)
 				      {
 					   cout<<"select price range"<<endl;
					   cin>>price;
					    if(price>=4500000&&price<=5000000)
					    {
						cout<<"east phase"<<endl;
						cout<<"1350 sq_ft of land"<<endl;
						cout<<"plot-No:188"<<endl;
						cout<<"chandighar"<<endl;
						cout<<"price=4700000"<<endl;
						fout<<"east phase"<<endl;
						fout<<"1350 sq_ft of land"<<endl;
						fout<<"plot-No:188"<<endl;
						fout<<"chandighar"<<endl;
						fout<<"price=4700000"<<endl;
					    }
					    else if(price>=4000000&&price<=4499999) 
					    {
						cout<<"south phase"<<endl;
						cout<<"1050 sq_ft of land"<<endl;
						cout<<"plot-No:128"<<endl;
						cout<<"jalandhar"<<endl;
						cout<<"price=4400000"<<endl;
						fout<<"south phase"<<endl;
						fout<<"1050 sq_ft of land"<<endl;
						fout<<"plot-No:128"<<endl;
						fout<<"jalandhar"<<endl;
						fout<<"price=4400000"<<endl;
					    }
					    else 
					    {
						cout<<"not available"<<endl;
						fout<<"not available"<<endl;
					    }
				       }
				      break;
				     case 2:
				      if(select=2)
				       {
				 	     cout<<"select price range"<<endl;
					     cin>>price;
					     if(price>=3500000&&price<=4000000)
					     {
						  cout<<"east phase"<<endl;
						  	cout<<"1350 sq_ft of land"<<endl;
						  	cout<<"plot-No:225"<<endl;
						  cout<<"chandighar"<<endl;
						   cout<<"price=3700000"<<endl;
						   fout<<"east phase"<<endl;
						  	fout<<"1350 sq_ft of land"<<endl;
						  	fout<<"plot-No:225"<<endl;
						  fout<<"chandighar"<<endl;
						   fout<<"price=3700000"<<endl;
					     }
					     else if(price>=3000000&&price<=3499999) 
					     {
						  cout<<"south phase"<<endl;
						  cout<<"1050 sq_ft of land"<<endl;
						  cout<<"plot-No:88"<<endl;
						  cout<<"jalandhar"<<endl;
						  cout<<"price=3400000"<<endl;
						  fout<<"south phase"<<endl;
						  fout<<"1050 sq_ft of land"<<endl;
						  fout<<"plot-No:88"<<endl;
						  fout<<"jalandhar"<<endl;
						  fout<<"price=3400000"<<endl;
					     }
					     else 
					     {
						  cout<<"not available"<<endl;
						   fout<<"not available"<<endl;
					     }
				        }
				        break;
			          case 3:
			           if(select=3)
				       {
				 	     cout<<"select price range"<<endl;
					      cin>>price;
					      if(price>=5500000&&price<=5000000)
					     {
						   cout<<"east phase"<<endl;
						   	cout<<"1350 sq_ft of land"<<endl;
						   	cout<<"plot-No:18"<<endl;
						   cout<<"chandighar"<<endl;
						   cout<<"price=5400000"<<endl;
						   fout<<"east phase"<<endl;
						   	fout<<"1350 sq_ft of land"<<endl;
						   	fout<<"plot-No:18"<<endl;
						   fout<<"chandighar"<<endl;
						   fout<<"price=5400000"<<endl;
					     }
					     else if(price>=4000000&&price<=4999999) 
					     {
						  cout<<"south phase"<<endl;
					    	cout<<"1050 sq_ft of land"<<endl;
					    	cout<<"plot-No:8"<<endl;
						   cout<<"jalandhar"<<endl;
						   cout<<"price=4400000"<<endl;
						   fout<<"south phase"<<endl;
					    	fout<<"1050 sq_ft of land"<<endl;
					    	fout<<"plot-No:188"<<endl;
						   fout<<"jalandhar"<<endl;
						   fout<<"price=4400000"<<endl;
					      }
					      else 
					      {
						   cout<<"not available"<<endl;
						    fout<<"not available"<<endl;
					      }
				        }
				         break;
				        default:
		               cout<<"enter valid option"<<endl;
		               fout<<"enter valid option"<<endl;
		               exit(0);
		               break;
				    }
			     }
				  break;
			    case 2:
				  if(option=2)
			      {
			    	cout<<"select type of bhk needed:"<<endl;
			 	    cout<<"1 for 1bhk"<<endl;
			 	     cout<<"2 for 2bhk"<<endl;
			 	     cout<<"enter no of rooms:"<<endl;
			 	    cin>>rooms;
			 	    switch(rooms)
			 	    {
				       case 1:
			 	       if(rooms=1)
			 	       {
			 		     cout<<"select price range"<<endl;
					     cin>>price;
					     if(price>=5000&&price<=6000)
					     {
						  cout<<"individual house"<<endl;
						   cout<<"chandighar"<<endl;
						   cout<<"bhaghath singh nagar"<<endl;
						   cout<<"price=5500"<<endl;
						   fout<<"individual house"<<endl;
						   fout<<"chandighar"<<endl;
						   cout<<"bhaghath singh nagar"<<endl;
						   fout<<"price=5500"<<endl;
					      }
					      else if(price>=4000&&price<=4499) 
					      {
						   cout<<"double_stored_building"<<endl;
					 	   cout<<"portion facing towards west phase in 1st floor"<<endl;
					 	   cout<<" near Law gate"<<endl;
						   cout<<"jalandhar"<<endl;
						   cout<<"price=4400"<<endl;
						   fout<<"double_stored_building"<<endl;
						   fout<<"portion facing towards east phase in 1st floor"<<endl;
						   fout<<" near Law gate"<<endl;
						   fout<<"jalandhar"<<endl;
						   fout<<"price=4400"<<endl;
					      }
					      else 
					      {
						   cout<<"not available"<<endl;
						   fout<<"not available"<<endl;
					      }
				        }
				        break;
				      case 2:  
				        if(rooms=2)
				          {
				 	       cout<<"select price range"<<endl;
					        cin>>price;
					         if(price>=6000&&price<=7000)
					       {
						    cout<<"individual house"<<endl;
						    cout<<"chandighar"<<endl;
						    cout<<"gold phase"<<endl;
						    cout<<"price=6500"<<endl;
						    fout<<"individual house"<<endl;
						    fout<<"chandighar"<<endl;
						    fout<<"gold phase"<<endl;
						    fout<<"price=6500"<<endl;
					       }
					       else if(price>=4500&&price<=4999) 
					       {
					    	cout<<"double_stored_building"<<endl;
					    	cout<<"portion facing towards east phase in 1st floor"<<endl;
					    	cout<<"near to Lovely Professional University"<<endl;
						    cout<<"jalandhar"<<endl;
						    cout<<"price=4800"<<endl;
						    fout<<"double_stored_building"<<endl;
						    fout<<"portion facing towards east phase in 1st floor"<<endl;
						    fout<<"near to Lovely Professional University"<<endl;
						    fout<<"jalandhar"<<endl;
						    fout<<"price=4800"<<endl;
					       }
					      else 
					       {
						    cout<<"not available"<<endl;
						    fout<<"not available"<<endl;
					       }
				        }
				        break;
				        default:
		                cout<<"enter valid option"<<endl;
		                fout<<"enter valid option"<<endl;
		                exit(0);
		                break;
				    }
			     }
			     break;
			     default:
		          cout<<"enter valid option"<<endl;
		          fout<<"enter valid option"<<endl;
		          exit(0);
		          break;
		    }
		    break;
		case 2:
			cout<<"select type of land:"<<endl;
			cout<<"1 for agricultural land"<<endl;
			cout<<"2 for open land"<<endl;
			cout<<"enter option for land"<<endl;
			cin>>land;
			switch(land)
			{
			 case 1:
			    if(land=1)
			    {
				    cout<<"please select price range"<<endl;
					cin>>price;
					if(price>=4500000&&price<=5000000)
					{
						cout<<"2_acres_of_land"<<endl;
						cout<<"survey-no:120-124"<<endl;
						cout<<"chandighar"<<endl;
						cout<<"price=4700000"<<endl;
						fout<<"2_acres_of_land"<<endl;
						fout<<"survey-no:120-124"<<endl;
						fout<<"chandighar"<<endl;
						fout<<"price=4700000"<<endl;
					}
					else if(price>=4000000&&price<=4499999) 
					{
						cout<<"1.5_acres_of_land"<<endl;
						cout<<"survey-no:20-24"<<endl;
						cout<<"jalandhar"<<endl;
						cout<<"price=4400000"<<endl;
						fout<<"1.5_acres_of_land"<<endl;
						cout<<"survey-no:20-24"<<endl;
						fout<<"jalandhar"<<endl;
						fout<<"price=4400000"<<endl;
					}
					else 
					{
						cout<<"not available"<<endl;
						fout<<"not available"<<endl;
					}
			    }
			    break;
			    case 2:
			    if(land=2)
			    {
				    cout<<"please select price range"<<endl;
					cin>>price;
					if(price>=20000000&&price<=30000000)
					{
						cout<<"2_acres_of_land"<<endl;
						cout<<"chandighar"<<endl;
						cout<<"survey-no:40-45"<<endl;
						cout<<"price=25000000"<<endl;
						fout<<"2_acres_of_land"<<endl;
						fout<<"chandighar"<<endl;
						fout<<"survey-no:40-45"<<endl;
						fout<<"price=25000000"<<endl;
					}
					else if(price>=10000000&&price<=16999999) 
					{
						cout<<"1.5_acres_of_land"<<endl;
						cout<<"survey-no:86-90"<<endl;
						cout<<"jalandhar"<<endl;
						cout<<"price=15000000"<<endl;
						fout<<"1.5_acres_of_land"<<endl;
						fout<<"survey-no:86-90"<<endl;
						fout<<"jalandhar"<<endl;
						fout<<"price=15000000"<<endl;
					}
					else 
					{
						cout<<"not available"<<endl;
							fout<<"not available"<<endl;
					}
			    }
			    break;
			    default:
		           cout<<"enter valid option"<<endl;
		           fout<<"enter valid option"<<endl;
		           exit(0);
		           break;
		    }
		    break;
			default:
		       cout<<"enter valid option"<<endl;
		       fout<<"enter valid option"<<endl;
		        exit(0);
		    break;	 
	 }
	 if(price!=0)
	 {
	 cout<<"choose payment method:"<<endl;
	 cout<<"1 for paying total amount at a time:"<<endl;
	 cout<<"2 for taking loan if amount greater than or equal to 10000000 "<<endl;
	 cout<<"3 for skip payment mode if not required"<<endl;
	 cin>>payment;
	 switch(payment)
	 {
	 	case 1:
	 		if(payment=1)
	 		{
	 		cout<<"select type of mode :"<<endl;
			 cout<<"1 for online transactions:"<<endl;
			 cout<<"2 for payment by cash:"<<endl;
			 cin>>mode;
			 if(mode=1)
			   {
			 	cout<<"pay to this ID-xxxxxxxxxx"<<endl;
			 	cout<<"acc_no xxxx xxxx xxxx xxxx"<<endl;
			 	fout<<"pay to this ID-xxxxxxxxxx"<<endl;
			 	fout<<"acc_no xxxx xxxx xxxx xxxx"<<endl;
				 }	
				 else if(mode=2)
				 {
				 	cout<<"pay at the time of registration"<<endl;
				 	fout<<"pay at the time of registration"<<endl;
				 }
				 else
				 {
				 	cout<<"invalid input"<<endl;
				 	fout<<"invalid input"<<endl;
				 }
			 }
			 break;
		case 2:
			if(payment=2)
			{	
			   if(price>=10000000)
			   {
				 loan=(price*20)/100;
				 cout<<"only for HDFC and SBI users"<<endl;
		        cout<<" 20 percent of the total price  will be given as loan"<<endl;
		        cout<<"loan available is:"<<loan<<endl;
		        r=0.0075;//rate of interest
		        cout<<"enter time period in months"<<endl;
		        cin>>t;
		        EMI=(loan*r*pow(1+r,t))/(pow(1+r,t)-1);
		        cout<<"EMI is:"<<EMI<<endl;
		        cout<<"pay to this ID-xxxxxxxxxx"<<endl;
			 	cout<<"acc_no xxxx xxxx xxxx xxxx"<<endl;
			 	fout<<"loan available is:"<<loan<<endl;
 	            fout<<"EMI is:"<<EMI<<endl;
		       }
		        else
		        {
		        	cout<<"loan not available"<<endl;
		        	fout<<"loan not available"<<endl;
				}
		   	}
		   	break;
		   	case 3:
		   		if(payment=3)
		   		{
		   			cout<<"payment not required"<<endl;
		   			fout<<"payment not required"<<endl;
		   			cout<<"have a nice day"<<endl;
				   }
				   break;
				   default:
				   	cout<<"enter valid input"<<endl;
				   	fout<<"enter valid input"<<endl;
				   	break;
	  }
	 }
	 fout.close();
	 cout<<"                                   Thank you for approaching                          "<<endl;
	 cout<<"                                   feel free to approach                              "<<endl;
	 cout<<"contact_no:xxxxxxxxxx"<<endl;
 }

 int main()
 {
 	real_estate_advisor r;
 	cout<<"                                            welcome                                        "<<endl;
 	cout<<"fill details:"<<endl;
 	r.details();
	r.get(); 
 	ofstream fout;
	fout.open("Seva.txt",ios::app);
	fout<<name<<endl;
	fout<<num<<endl;
	fout.close();
	return 0;
 }
