#include<iostream.h>
#include<fstream.h>
int main()
{
    char line[100];
    fstream file;
    // declare an object of fstream class
    // open file in append mode
    file.open("a", ios :: out | ios :: app);
    if (file.fail())
    {
        // check if file is opened successfully
        // file opening failed
        cout << "Error Opening file ... " << endl;
    }
    else
    {
        cout<<"Enter Your Name : ";
        cin.getline(line, 100);
        file << line <<endl;
        // Append the line to the file
        cout<<"Enter Your RollNo : ";
        cin.getline(line, 100);
        file<<line<<endl;
        cout<<"Enter Your Age : ";
        cin.getline(line, 100);
        file<<line<<endl;
        cout<<"Line written into the file"<<endl;
    }
    return 0;
}
