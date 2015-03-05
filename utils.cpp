
#include <vector>
#include <string>

using namespace std;

vector<string> split_str(string line)
{
    vector<string> words;
    string working_word("");
    for (int i = 0; i < line.length(); i ++)
    {
        if (isspace(line[i]))
        {
            if (working_word == "") continue;
            else
            {
                words.push_back(working_word);
                working_word = "";
            }
        }
        working_word += line[i];
    }
    if (working_word.length())
    {
        words.push_back(working_word);
    }
    return words;
}

