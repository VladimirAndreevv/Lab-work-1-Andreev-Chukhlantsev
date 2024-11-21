#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

void OpenFile()
{

}
void ReadingFile(vector<string> &poem)
{
    for (vector<string>::iterator it=poem.begin(); it!=poem.end(); it++)
    {
        string x = *it;
        cout << x << endl;
    }
}
void RecordFile()
{

}

int main()
{

    OpenFile();
    ReadingFile();
    RecordFile();

}
