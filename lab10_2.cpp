#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string line;
    ifstream myfile ("example.txt");

if (myfile.is_open())
{
    while (getline (myfile,line)) /*่านค่าไฟล์ เก็บไว้ใน ... ให้ผลรับเป็นจริง*/
    {
        cout <<line<<'\n'; /*แล้วก้อแสดงออกมา */

    }  /*กลับขึ้นไปทำใหม่อีกรอบ*/
    myfile.close(); /*ิดไฟล์*/
}
else cout << "unable to open file";
return 0;
}


/*
ประการตัวแปล
สร้างเงื่อนไข เพื่อการอ่านไฟล์
เราจะใช้ลูปวาย
ใช้ฟังชันเกดไป อ่านค่าที่ล่ะ บรรทัด
และจะให้ข้อมูลตัวนั้นไปเก็บ

*/


