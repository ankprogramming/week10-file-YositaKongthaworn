#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    int cmd;  /*รับการเลือกข้อมูล*/
    string name; /*ชื่อ*/
    string line; /*   */
    ofstream writefile;  /*ค้นหาไฟล์เเล้วเขียนต่อ    --ตัวเขียน----*/
    ofstream readfile ;


    do {

        cout << "MEnu"<<endl;
        cout << "1. Add student"<<endl;
        cout << "2. List student" <<endl;
        cout << "3. Quit" << endl;
        cout << "Please Enter MEnu" <<endl;

        cin>> cmd;

        if (cmd==1){
            cout << "Enter STD name :";
            cin >> name;
            writefile.open("std.txt",fstream::app);

            if(writefile.is_open()){
                writefile << name <<endl;
                writefile.close();
            }else {
                cout << "Unable to open file";
            }
        } else if (cmd==2){
         readfile.open("std.txt");
         if (readfile.is_open()) {
            while (getline(readfile,line))
                cout << line <<endl;
         }
            readfile.clear();

        }else {break;}
    } while(1);

    return 0;
}


/*สร้างตัวแปลเพื่อเก็บค่าที่ป้อนเข้ามา
  1.ใช้ Do แล้วสร้างเมนู้เพื่อเลือกโดยใช้ cout เพื่อแสดงข้อความ
  2. cin เพื่อรับค่าในการเลือกเมนู
        3.ใช้ if เพื่อกำหนดการทำงาน โดย
        ถ้าเราเลือก 1 แล้ว ให้เพิ่มชื่อ รับค่าเพิ่มชื่อ และ ประการตัวเก็บ.เปิด(ประเภทของชนิดตัวแปล:: app)
        ถ้าเราเลือก 2  ให้อ่านไฟล์แล้ว โชวออกมา
         ถ้าเราเลือก  3 เราออก

