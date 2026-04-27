#include <iostream>
#include <string>
using namespace std;
class mahasiswa
{
private:
    string name;
public:
    friend void setNama(mahasiswa &a, string);
};