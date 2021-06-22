#include <iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>

using namespace std;
const int NO_OF_STUDENTS = 4;
struct DOB
{
    int dd;
    int mm;
    int yyyy;
};

class Student
{
public:
    Student():m_name("NA"),m_id(-1),m_dob{0,0,0},m_sex('N'),m_score(0.0) {}
    void GetDetails()
    {
        cout << "Name:";
        cin >> m_name;
        cout << "Id:";
        cin >> m_id;
        cout << "DOB(dd/mm/yyyy):";
        cin >> m_dob.dd;
        getchar();
        cin >> m_dob.mm;
        getchar();
        cin >> m_dob.yyyy;
        cout << "Sex(M/F/O):";
        cin >> m_sex;
        cout << "Score:";
        cin >> m_score;
    }
    float GetScore()
    {
        return m_score;
    }
    string GetName()
    {
        return m_name;
    }
    DOB GetDOB()
    {
        return m_dob;
    }

    char GetSex()
    {
        return m_sex;
    }
    void ShowDetails()
    {
        cout << left << m_name << setw(15);
        cout << m_id << setw(15);
        cout << m_dob.dd << "/" << m_dob.mm << "/" << m_dob.yyyy<< setw(15);
        cout << m_sex<< setw(15);
        cout << m_score<< endl;
    }
private:
    string m_name;
    int m_id;
    DOB m_dob;
    char m_sex;
    float m_score;
};


void FindYoungestAndEldest(Student** students, int n)
{
    Student *youngerSudent = students[0];
    Student *elderSudent = students[0];

    for(int i = 1; i < n; i++)
    {
        if (youngerSudent->GetDOB().yyyy > students[i]->GetDOB().yyyy)
        {
            youngerSudent = students[i];
        }
        else if (youngerSudent->GetDOB().yyyy == students[i]->GetDOB().yyyy)
        {
            if(youngerSudent->GetDOB().mm > students[i]->GetDOB().mm)
            {
                youngerSudent = students[i];
            }
            else if(youngerSudent->GetDOB().mm == students[i]->GetDOB().mm)
            {
                if(youngerSudent->GetDOB().dd > students[i]->GetDOB().dd)
                {
                    youngerSudent = students[i];
                }
            }

        }

        if (elderSudent->GetDOB().yyyy < students[i]->GetDOB().yyyy)
        {
            elderSudent = students[i];
        }
        else if (elderSudent->GetDOB().yyyy == students[i]->GetDOB().yyyy)
        {
            if(elderSudent->GetDOB().mm < students[i]->GetDOB().mm)
            {
                elderSudent = students[i];
            }
            else if(elderSudent->GetDOB().mm == students[i]->GetDOB().mm)
            {
                if(elderSudent->GetDOB().dd < students[i]->GetDOB().dd)
                {
                    elderSudent = students[i];
                }
            }
        }

    }
    cout << "Elder Student in Class:" << elderSudent->GetName() << endl;
    cout << "Younger Student in Class:"  << youngerSudent->GetName() << endl;
}
void FindHigestAndLowest(Student** students, int n)
{
    Student *lowestSudent = students[0];
    Student *higestSudent = students[0];

    for (int i = 1; i < n; i++)
    {
        if (lowestSudent->GetScore() > students[i]->GetScore())
        {
            lowestSudent = students[i];
        }
        if (higestSudent->GetScore() < students[i]->GetScore())
        {
            higestSudent = students[i];
        }
    }

    cout << "Highest Score Student in class:" << higestSudent->GetName() << endl;
    cout << "Lowest Score Student in class:"  << lowestSudent->GetName() << endl;
}

void FindProportionOfGirlsToBoys(Student** students, int n)
{
    int noOfBoys = 0;
    int noOfGirls = 0;

    for(int i = 0; i < n; i++)
    {
        if (students[i]->GetSex() == 'M')
        {
            noOfBoys++;
        }
        else {
          noOfGirls++;
        }
    }

    cout << "No of Boys in class:" << noOfBoys << endl;
    cout << "No of Girls in class:" << noOfGirls <<  endl;
}
int main()
{
    Student *students[NO_OF_STUDENTS];
    for(int i = 0; i < NO_OF_STUDENTS; i++)
    {
        cout << "Enter Student " << i + 1 << " Details\n";
        students[i] = new Student;
        students[i]->GetDetails();
        system("CLS");
    }

    cout << "\n############STUDENTS IN CLASS###############\n";
    cout << "Name" << right << setw(15) << "ID" << setw(17)  << "DOB" << setw(23) << "SEX" << setw(16) << "SCORE" << endl;
    for(int i = 0; i < NO_OF_STUDENTS; i++)
    {
        students[i]->ShowDetails();
    }

    cout << "\n###########################\n";
    FindHigestAndLowest(students, NO_OF_STUDENTS);
    cout << "\n###########################\n";
    FindYoungestAndEldest(students, NO_OF_STUDENTS);
     cout << "\n###########################\n";
    FindProportionOfGirlsToBoys(students, NO_OF_STUDENTS);
    return 0;
}
