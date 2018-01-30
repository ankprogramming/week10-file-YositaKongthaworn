#include<iostream>
#include<fstream>
using namespace std;

int main() {
ofstream myfile ("example.txt");
if (myfile.is_open())
{
myfile << "this is a line.\n";
myfile << "this is a another line.\n";
myfile.close();
}
else cout << "unable to oprn file";
return 0;
}

*/
