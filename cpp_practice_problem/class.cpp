// problem link: https://www.hackerrank.com/challenges/c-tutorial-class

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age;
    string fname;
    string lname;
    int std;

public:
    inline int get_age() const { return age; }
    inline string get_last_name() const { return lname; }
    inline string get_first_name() const { return fname; }
    inline int get_standard() const { return std; }
    void set_age(int);
    void set_first_name(string);
    void set_last_name(string);
    void set_standard(int);
    string to_string();
};

void Student::set_age(int age) { this->age = age; }
void Student::set_first_name(string fname) { this->fname = fname; }
void Student::set_last_name(string lname) { this->lname = lname; }
void Student::set_standard(int std) { this->std = std; }
string Student::to_string()
{

    ostringstream oss;
    oss << get_age() << "," << get_first_name() << "," << get_last_name() << "," << get_standard();
    return oss.str();
}

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}