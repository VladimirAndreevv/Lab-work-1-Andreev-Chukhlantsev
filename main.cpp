#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void OpenFile(vector<string> &poem)
{

    ifstream in;
    in.open("Pushkin.txt");
    if(in.is_open())
    {
        cout << "open" << endl;
    }
}
void ReadingFile()
{

}
void RecordFile()
{

}

int main()
{
vector<string> poem;
  OpenFile(poem);
  ReadingFile();
  RecordFile();
  return 0;
}
