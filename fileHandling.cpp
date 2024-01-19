// https://www.geeksforgeeks.org/file-handling-c-classes/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*
    string input;
    cout<<"Enter Something : "<<endl;
    getline(cin, input);
    */

    // Create a File

    /*
    try{
        ofstream myFile("Test.txt", ios::app);       // ios::out | ios::ate [fstream]
        // myFile.open("Test.txt");                  // Open the File
        myFile<<input;
        myFile.close();
        cout<<"File Operation Successful";
    }
    catch(...){
        cout<<"File Operation Unsuccessful"; 
    }
    */

    // Read File

    try{
        ifstream myFile("Test.txt", ios::in);        
        // myFile.open("Test.txt");                  
        char output[100];
        myFile.getline(output, 100);
        myFile.close();
        cout<<"The File Contents are : ";
        puts(output);
        cout<<"File Operation Successful";
    }
    catch(...){
        cout<<"File Operation Unsuccessful"; 
    }   
    
    return 0;
}