#include<iostream>
#include<math.h>
#include<cstdlib>
#include<string>

using namespace std;



class Person
{
     private :   
         
    string FirstName;     // student name, max 49 characters
    string LastName;      // student family name
    int PersonalID ;      
    double Salary ;
    double WorkingHours ;
    double CostPerHour ; 
      
        public :  
              
               void set_FieldName();
                void get_FieldName();
                void gett_FieldName();
                void set_PersonalID();
               void set_Name();
               void LastNamesortList();
               void in_FirstName();
               void in_FamilyName();
               void in_Workinghour();
               void in_Costperhour();
                               };
                                    

class HRM
{
     private :  
             
               
     Person e[100] ;      
       Person temp[100]; 
    public : 
            
      void AddPerson();
      void DeletePerson();
      void SearchPerson();
      void UpdatePerson();
      void ReportList();
 
};
int n=0,i=0,x=8248001,y[100];
bool flag=0;
int  z[100];
string h[100];
double sal[100];
int check=0;



void ::HRM::AddPerson() {
       
        int x;
        char redo;
         
         do
           {
         n++;
        e[i].set_FieldName();
        i++;
                
                     cout<<"\nThe employee with the following information has been added to the system:"<<endl;
                     cout<<"\nFirst Name       Last Name       Personal ID         Salary per year (Euros)"; 
                     cout<<"\n--------------   --------------  ------------       -------------------------"<<endl; 
                     //cout<<"naaaaaaaaaaaam"<< n<<endl;
           for(int i=0; i<n; i++){      
                                 e[i].get_FieldName();
                                 }  
                                 
                                 
        cout<<"do u wont to add another employee"<<endl;  
         cin>>redo;
        }
        while((redo=='y'||redo=='Y'));
        
        }
        
        

        
        void HRM::DeletePerson() {
        //      Show all of the current employees
        //      Ask the user the ID of which employee that they wish to
        //      delete.
        				
        int empId;
        bool lol;
        char redo1,redo2;
        lol =false;
         lebel:
        cout << "ID of employee to remove: ";
      
         while(!(cin>>empId))  //Reciving vaiables from input : is it no/character ?
      {
                   cout << "Please  enter a number!  Try again: ";
                   cin.clear ();   
                  cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                           // whichever comes first.
      }
      

        
       
        for ( i = 0; i < n; ++i) {
           
                
                if (y[i]==empId) {     
                    e[i]=e[i+1];
                   lol=true;
                     e[i].set_Name();
      cin>>redo2;
       if(redo2=='Y'||redo2=='y'){
        int a;
        a=n;                           
                                  
                                   cout<<"\nThe employee with the following information has been added to the system:"<<endl;
 cout<<"\nFirst Name       Last Name       Personal ID         Salary per year (Euros)"; 
 cout<<"\n--------------   --------------  ------------       -------------------------"<<endl;
        for(int i=0; i<a; i++){
               
                              e[i].get_FieldName();
                              cout<<"hahahahah="<<n<<endl;
      a--;
      n=a;
      n++;
                                } 
       
                                            
                                              ///      goto lebel1;
                                                    }
                          
     cout <<endl;   
                     
                           //Delete function
                                  }
                 
                          }
        

     
          
        
         if (lol==false) {
             cout<<"Sorry, there is not any employee with requested personal number."
                 <<" Do you want to repeat delete by entering the new personal number (y/n)?:";
             cin>>redo1;
 if(redo1=='Y'||redo1=='y'){
                              goto lebel;
                              cout<<endl<<endl;
                            }
                 }
        
      
    

        //      Delete the chosen employee from the array of employees
        //      as represented in this class. 

        // Actually remove the entry from memory so as to not leak objects
        //nextIndex--;
        

}
/////////////////////////////////////////////////////////////////////
//      Definition of the UpdatePerson() method of the Company class
//      This method will modify an attribute of the employee in 
//      the Company class instance. The employee and attribute should be
//      ones of the user's own choosing.
void HRM::UpdatePerson(){
     
        int empId;
        char redo1,redo2;
        
         lebel:
               cout << "ID of employee to modify data: ";
    
         while(!(cin>>empId))  //Reciving vaiables from input : is it no/character ?
      {
               cout << "Please  enter a number!  Try again: ";
               cin.clear ();   
               cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                  // whichever comes first.
      }
       
       
        
       
      int flag1=0;
for (int i = 0; i < n; ++i) {
            
                if (y[i]!=empId) {    
                flag1++;
         
                                 }
                          } 
                        /*  if (flag1==n){
                          
                         // cout<<" not     matching="<< y[i];
cout<<"Sorry, there is not any employee with requested personal number. Do you want to repeat delete by entering the new personal number (y/n)?:";
                     cin>>redo1;
                          if(redo1=='Y'||redo1=='y'){
                          goto lebel;
                            }
                          } */         

     cout <<endl;   
     lebel1:
        
       for (int i = 0; i < n; ++i) {
           
                
                if (y[i]==empId) {
                   
                   cout<<"matching="<< y[i];      
                 
       flag=true;
       int choice = 0;
       char redo;
       
        do {
                cout << endl << endl;
               cout << "Please enter the related number of field which you would like to update" << endl;
                cout <<"1. First name" << endl;
               cout << "2. Family name" << endl;
               cout << "3. Working hours per week" << endl;
               cout << "4. Payment for one hour" << endl;
               cout << std::endl;

                cin >> choice;
                if (choice == 1) {
                        cout << " First name: ";
                       e[i].in_FirstName();
                }
                else if (choice == 2) {
                       cout << " Family name: ";
                       e[i].in_FamilyName();
                }
                else if (choice == 3) {
                        cout << " Working hours per week: ";
                         e[i].in_Workinghour();
                }
                else if (choice == 4) {
                        cout << " Payment for one hour: ";
                         e[i].in_Costperhour();
                }
                cout<<"Do you want to update another field (Y/N)=";
                cin>>redo;
        } while (redo=='y'||redo=='Y');
        }
        }
       int a;
        a=n;
         cout<<"\nThe employee with the following information has been added to the system:"<<endl;
         cout<<"\nFirst Name       Last Name       Personal ID         Salary per year (Euros)"; 
         cout<<"\n--------------   --------------  ------------       -------------------------"<<endl;

for(int i=0; i<a; i++){
        e[i].get_FieldName();
        
        cout<<"hahahahah="<<n<<endl;
     
        } 
          }



void ::Person::in_FirstName()
{
     cin>>FirstName ;
}
void::Person::in_FamilyName()
{
 cin>>LastName;
}
void::Person::in_Workinghour()
{
  cin>>WorkingHours;
  Salary=WorkingHours*CostPerHour*52;
}
void::Person::in_Costperhour()
{
  cin>>CostPerHour;
  Salary=WorkingHours*CostPerHour*52;
}







void HRM::ReportList() {
     
 char op;
 bool doMore;
 cout<<"\nPlease enter the related number of the field which you would like to sort the list based on it.\n(1. Family name, 2.Salary)?\n"<<endl;                       
 //cin>>op;
    while(!(cin>>op))  //Reciving vaiables from input : is it no/character ?
      {
                   cout << "Please  enter a number!  Try again: ";
                   cin.clear ();   
                  cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                           // whichever comes first.
      }
      

         switch(op)
         {
           case '1':
                    cout<<"\nSorting based on Family Name\n"<<endl;
                    for(int i=0;i<=n;i++)
                    {
                     for(int j=i+1;j<=n-1;j++)      
                     {  
                        if(h[i]>h[i+1])
                        {
                           temp[i]=e[i];                       
                           e[i]=e[j];
                           e[j]=temp[i];
                        }
                     }
                    }
                    
                    
                   for(int i=0;i<n;i++)
                   {
                   e[i].get_FieldName();
                   }
                     cout<<"\nsorted\n";
                   
                    break;
           case'2':
                    cout<<"\nSorting based on Salary\n"<<endl;
                    for(int h=0;h<n;h++)
                    {
                       for(int q=h+1;q<n;q++)    
                       {     
                    if(sal[h]>sal[h+1]);
                     {
                           temp[h]=e[h];                       
                           e[h]=e[q];
                           e[q]=temp[h];
                        }
                     }
                    }
                   for(int j=0;j<n;j++)
                   {
                   e[j].get_FieldName();
                   }
                    cout<<"\nsortedlist is printed above\n";
                    
                    break;        
           }
 }
      
      

void HRM::SearchPerson(){
     int c;
     char redo1;
     string familyname;
     double min,max;
      do{  
      cout<<"Search is based on two different fields (1.family name, 2.Salary), please enter your choice?="<<endl;
      //cin>>c;
       while(!(cin>>c))  //Reciving vaiables from input : is it no/character ?
      {
                   cout << "Please  enter a number!  Try again: ";
                   cin.clear ();   
                  cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                           // whichever comes first.
      }
      
      
      if(c==2)
      
      {
              cout<<"Please define your search range for salary of employees ."<<endl;
              cout<<"What is minimum salary for search (S_min)?="<<endl;
              //cin>>min;
               while(!(cin>>min))  //Reciving vaiables from input : is it no/character ?
      {
                   cout << "Please  enter a number!  Try again: ";
                   cin.clear ();   
                  cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                           // whichever comes first.
      }
              cout<<"What is maximum salary for search (S_max)?="<<endl; 
              //cin>>max;
               while(!(cin>>max))  //Reciving vaiables from input : is it no/character ?
      {
                   cout << "Please  enter a number!  Try again: ";
                   cin.clear ();   
                  cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                           // whichever comes first.
      }
                    int a;
                    a=n;
         cout<<"\nThe employee with the following information has been added to the system:"<<endl;
 cout<<"\nFirst Name       Last Name       Personal ID         Salary per year (Euros)"; 
 cout<<"\n--------------   --------------  ------------       -------------------------"<<endl;
              for(int i=0; i<n; i++) {
            
                
                   if (z[i]>min && z[i]<max) {
                               
                                       cout<<"naaaaaaaaaaaam"<< n<<endl;   
                                       e[i].gett_FieldName();             
                                       cout<<"matching="<< z[i];           
                                           }
                                     } 
       
       
             
       }
       
       else if(c==1)
      {
                    cout<<"Please enter the family name of employee?"<<endl;
                    cin>>familyname;
                    cout<<"\nThe employee with the following information has been added to the system:"<<endl;
                    cout<<"\nFirst Name       Last Name       Personal ID         Salary per year (Euros)"; 
                    cout<<"\n--------------   --------------  ------------       -------------------------"<<endl;

