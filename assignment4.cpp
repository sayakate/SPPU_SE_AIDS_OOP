#include <iostream>
#include <fstream>
using namespace std;
const int MAX = 10;
int array1[MAX] = { 10,20,30,40,50 };
int array2[MAX];
int main()
{
ofstream os; //create output stream
os.open("tes.txt", ios::trunc | ios::binary);
if (!os)
{
cerr << "Could not open output file\n";
exit(1);
}
cout << "Writing the contents to the file...\n\n";
os.write((char*)&array1,sizeof(array1));
if (!os)
{
cerr << "Could not write to file\n";
exit(1);
}
os.close();
ifstream is; //create input stream for reading the contents from file
is.open("tes.txt",ios::binary);
if (!is)
{
cerr << "Could not open input file\n"; //Error Handling
exit(1);
}
cout << "Reading the contents from the file ...\n";
is.read((char*)&array2,sizeof(array2));
if (!is)
{
cerr << "Could not read from file\n"; //Error Handling
exit(1);
}
for (int j = 0; j < MAX; j++) //check data
cout << " " << array2[j];
return 0;
}