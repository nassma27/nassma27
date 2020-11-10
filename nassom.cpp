#include <iostream>
#include <string>
#include <fstream>

using namespace std;

   void outpout( string x1, string x2,  char x3, char x4, int x5)
    
    
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
   cout << "Verage is : "<<  the sum of studentsubjectArrey[i]/8 << end1;
   cuot << "General appreciation is :"<< verage << end1;
  }
    
   int main()
   {
    string student_name , student_id ;
    char depratment , general apprection;
    int result;
    output(student_name ,student_id ,depratment ,generl apprection ,result)
     file << "student_name= " << student_name<<end1;
     file << "student_id= " << student_id<<end1;
     file << "depratment= " << depratment<<end1;
     file << "general apprection= " << general apprection<<end1;
     file << "result= " << result<<end;
    
  
  
  
  
        return 0;
        





}
