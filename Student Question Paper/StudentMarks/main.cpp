/**
 * Copyright public
 *
 * This file is part of student exercise.
 *
 * \author Swamy Kanuri, swamynaidukanuri@gmail.com
 *
 * \file main.cpp
 * For further information or for explanation drop me a email swamynaidukanuri@gmail.com.
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

char classNames[] = {'A','B','C','D','E'};

struct ProgressCard
{
    string subject_name;
    float total;
    float average;
};

void inputMarks(float marksArray[], int sz)
{
    float marks;
    for(int i = 0; i < sz; i++)
    {
        cout << "Enter class " << classNames[i] << " marks:";
        cin >> marks;

        if(0 <= marks && marks <=100)
        {
            marksArray[i] = marks;
        }
        else
        {
            cout << "Out of range please enter in range 0 to 100" << endl;
            i--;
        }
    }
}

float minimumMark(const float& marks1, const float& marks2)
{
    if (marks1 < marks2)
    {
        return marks1;
    }
    else
    {
        return marks2;
    }
}

float maximumMark(const float& marks1, const float& marks2)
{
    if (marks1 < marks2)
    {
        return marks2;
    }
    else
    {
        return marks1;
    }
}

float averageMark(const float& marks1, const float& marks2)
{
    return ( (marks1 + marks2) / 2);
}

float totalMark(const float& marks1, const float& marks2)
{
    return (marks1 + marks2);
}

void storeData(float subjectP[], float subjectQ[], float results[], const int sz, const char mode)
{
    switch(mode)
    {
    case 'G':
    {
        for(int i = 0; i < sz; i++)
        {
            results[i] = maximumMark(subjectP[i], subjectQ[i]);
        }
        break;
    }
    case 'L':
    {
        for(int i = 0; i < sz; i++)
        {
            results[i] = minimumMark(subjectP[i], subjectQ[i]);
        }
        break;
    }
    case 'T':
    {
        for(int i = 0; i < sz; i++)
        {
            results[i] = totalMark(subjectP[i], subjectQ[i]);
        }
        break;
    }
    case 'A':
    {
        for(int i = 0; i < sz; i++)
        {
            results[i] = averageMark(subjectP[i], subjectQ[i]);
        }
        break;
    }
    default :
        cout <<  "Invalid Mode..\n";
    }
}

void printReport(float subjectP[], float subjectQ[], int sz)
{
    cout << "Class" << setw(13) << "Subject P" << setw(13) << "Subject Q" << setw(13);
    cout << "Minimum" << setw(13) << "Maximum" << setw(10) << "Total" << setw(10)<< "Average" <<  endl;

    for(int i = 0 ; i < sz; i++)
    {
        cout << classNames[i] << setw(13) << subjectP[i] << setw(13) << subjectQ[i] << setw(13);
        cout << minimumMark(subjectP[i],subjectQ[i]) << setw(13);
        cout << maximumMark(subjectP[i],subjectQ[i]) << setw(13);
        cout << totalMark(subjectP[i],subjectQ[i]) << setw(10);
        cout << averageMark(subjectP[i],subjectQ[i]);
        cout << endl;
    }
}

void summaryOfSubject(ProgressCard& progressCard, string subName, float subjectMarks[], int sz)
{
    progressCard.subject_name = subName;
    progressCard.total = 0;

    for(int i = 0; i < sz; i++)
    {
        progressCard.total +=  subjectMarks[i];
    }
    progressCard.average =  progressCard.total / 5;
}
int main()
{
    // Q.i : Array's Creation
    float subject_1[5];
    float subject_2[5];
    float results[5];

    // Q.ii: Insert P marks to subject_1
    cout << "\n****Subject P*****\n";
    inputMarks(subject_1, 5);

    // Q.iii: Insert P marks to subject_2
    cout << "\n****Subject Q*****\n";
    inputMarks(subject_2, 5);

    // Q.iv: Highest marks using store data.
    storeData(subject_1, subject_2, results, 5, 'G');
    cout << "\n\n***Highest of P and Q***\n";
    for (int i = 0; i < 5; i++)
        cout << results[i] << " ";

    // Q.v: Lowest marks using store data.
    storeData(subject_1, subject_2, results, 5, 'L');
    cout << "\n\n***Lowest of P and Q***\n";
    for (int i = 0; i < 5; i++)
        cout << results[i] << " ";

    // Q.vi: Total marks using store data.
    storeData(subject_1, subject_2, results, 5, 'T');
    cout << "\n\n***Total of P and Q***\n";
    for (int i = 0; i < 5; i++)
        cout << results[i] << " ";

    // Q.vii: Average marks using store data.
    storeData(subject_1, subject_2, results, 5, 'A');
    cout << "\n\n***Avg of P and Q***\n";
    for (int i = 0; i < 5; i++)
        cout << results[i] << " ";

    cout << "\n\n***Report*****\n";
    // Q.viii: Print Report
    printReport(subject_1,subject_2,5);

    // Q.ix: Strcuture creation
    cout << "\n\n****Strcuture result1****\n";
    ProgressCard procard1;
    summaryOfSubject(procard1, "P",subject_1,5);
    cout << "Subject Name:" << procard1.subject_name << endl;
    cout << "Subject Total Marks:" << procard1.total << endl;
    cout << "Subject Average Marks:" << procard1.average << endl;

    cout << "\n\n****Strcuture result2****\n";
    ProgressCard procard2;
    summaryOfSubject(procard2, "Q",subject_2,5);
    cout << "Subject Name:" << procard2.subject_name << endl;
    cout << "Subject Total Marks:" << procard2.total << endl;
    cout << "Subject Average Marks:" << procard2.average << endl;

    return 0;
}
