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


