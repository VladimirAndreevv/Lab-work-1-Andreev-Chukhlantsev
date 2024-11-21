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
    string line;
    while (getline(in, line))
    {
        poem.push_back(line);
    }
    in.close();
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
