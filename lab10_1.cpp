#include <iostream>
using namespace std;

void swap(int * a,int * b)
   {
    int yo;
    yo  = * a;
    * a = * b;
    * b = yo;

   }

int main() {
    int a,b,cmd;


   cin >>a;
   cin >>b;
   do {
    cout << "menu\n1.swap()\n2.quit()"<< endl;
    cin>> cmd;
        if (cmd==1){
            swap(&a,&b);
        }else {break;}
   }
    while(1);
   return 0;
}




/*
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
