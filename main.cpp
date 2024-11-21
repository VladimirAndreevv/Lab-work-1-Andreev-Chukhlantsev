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
void RecordFile(const string& name, vector<string> &poem)
{
    ofstream output_file(name);
    for (const auto& line : poem) {
        output_file << line << endl;
    }
    output_file.close();
}

int main()
{
    /* vector<string> poem = {
        "first string",
        "second string",
        "third string"
    }; */
    OpenFile();
    ReadingFile(poem);
    string name = "output.txt";
    RecordFile(name, poem);

}
