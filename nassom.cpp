#include <iostream>
#include <string>

using namespace std;
 int main()
{
 student studentArrey[10];
  for(int i=0;i<10; ++i)
  {
   student student;
   student.readstudrnt();
   studentArrey[i] =student;
  }
   
  student subject studentsubjectArrey[8];
     for(int i=0; i < 7; i++)
     {
      student subject  student subject;
      student subjct.readstudentsubjct();
      studentsubjectArrey[i] =student subject;
     }
  
  
  
  
  
  string student_name, student_id;
    char depratment,general apprection;
    int result,verge,

 
    cout << "Student Name: ";
    cin >> student_name;
    cout << " Student ID: ";
    cin >> student_id;
    cout << "Depratment: ";
    cin >> depratment;
    cout << " Result: ";
    cin >>result;

    string division;
    char grade;

    // Using if
    if(depratment == "A")
        division = "control";
    else if (depratment == "T")
           division = "It";
     else
     division = " Unknown";

     //Using switch
     switch (depratment)  {
         case "A" :
             division = "Control";
             break;
          case "T" :
             division = "It";
             break;
          default:
             division = " Unknown";


     }  

     if(result >= 90 && result <= 100)  
         grade = "A";
     else if(result >= 80 && result < 90)
         grade = "B";
      else if(result >= 70 && result < 80)  
         grade = " C";
      else if(result >= 60 && result < 70)
         grade = "D";
       else
       grade = "F";


        cout << "Name: " << student_name << end1;
        cout << "ID: " << student_id << end1;
        cout <<" Grade: " << grade << end1;
  
  
  for(int i =0; i < 10; ++i)
  {  cout << studentsArrey[i];
  }
  
  for(int i =0: i < 7; ++i)
  {
   cout << studentsubjectArrey[i];
   cout << "Verage is : "<< studentsubjectArrey[i]/3 << end1;
   cuot << "General appreciation is :"<< verage << end1;
  }
    
    
  
  
  
  
        return 0;
        





}
