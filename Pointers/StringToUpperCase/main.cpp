/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
@Question:
Create a String class Add a member
function called upit() that converts the string to all uppercase. and display() to display the string.
You can use the toupper() library function, which takes a single character as an argument and returns a
character that has been converted (if necessary) to uppercase.
Write some code in main() to test upit().
*/

#include <iostream>
#include <cstring>
using namespace std;

class String
{
public:
    String(const char* str)
    {
        m_strLength = strlen(str);
        m_ptr = new char[m_strLength+1];
        strcpy(m_ptr,str);
    }
    virtual ~String(){delete []m_ptr;}
    void display()const
    {
        cout << m_ptr << endl;
    }
    void upit()
    {
        for(int i = 0; i < m_strLength; i++)
        {
            m_ptr[i] = toupper(m_ptr[i]);
        }
    }
private:
    char *m_ptr;
    int m_strLength;
};
int main()
{
    String str("Hello world!");
    str.display();
    str.upit();
    str.display();
    return 0;
}
