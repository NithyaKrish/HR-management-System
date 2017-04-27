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
