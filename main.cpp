
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <cctype>
#include <set>
#include "multimapset.h"

using namespace std;

vector<string> split_str(string line);

multimapset<string, string> dna_proteins;
multimapset<string, string> proteins_dna;


int main()
{
    string filename = "/home/igor/blastx.outfmt6_10";
    ifstream deci(filename.c_str());
    string line;
    while(getline(deci, line))
    {
        vector<string> words = split_str(line);
        dna_proteins.insert(words[0], words[1]);
    }
    cout << "============================\n";
    set<string> good = dna_proteins.find("m.53418");
    cout << good.size() << endl;
    return 0;
}


