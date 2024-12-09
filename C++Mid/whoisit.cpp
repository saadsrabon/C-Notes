#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id;
    char name[105];
    char section[2];
    int marks;

};

int main() 
{
     int T;

        cin >> T;
             int temp =T;
        // So T each  test case 
        Student studentArray[T*3];
           int index = 0;
        while (T--)
        { 
         
            for(int i=0;i<3;i++)
            {
                Student s;
                cin >> s.id >> s.name >> s.section >> s.marks;
                studentArray[index++] = s;
                
            }
           
        }
    
    for (int i = 0; i < temp; i++) {
        int groupStart = i * 3;  
        Student bestStudent = studentArray[groupStart];  

        for (int j = groupStart + 1; j < groupStart + 3; j++) { 
            if (studentArray[j].marks > bestStudent.marks || 
               (studentArray[j].marks == bestStudent.marks && studentArray[j].id < bestStudent.id)) {
                bestStudent = studentArray[j];
                
               
            }
        }
        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.section << " " << bestStudent.marks << endl;

    }

        

    return 0;
}