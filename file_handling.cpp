#include<fstream>
using namespace std;

int main() {
    ofstream fout("test.txt");
    fout << "Hello File";
    fout.close();

    string line;
    ifstream fin("test.txt");
    while(getline(fin, line)) {
        fout << line << endl;
    }
    fin.close();
    return 0;
}
