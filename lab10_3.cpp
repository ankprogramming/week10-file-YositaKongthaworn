#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    int cmd;  /*�Ѻ������͡������*/
    string name; /*����*/
    string line; /*   */
    ofstream writefile;  /*��������������¹���    --�����¹----*/
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


/*���ҧ����������纤�ҷ���͹�����
  1.�� Do �������ҧ������������͡���� cout �����ʴ���ͤ���
  2. cin �����Ѻ���㹡�����͡����
        3.�� if ���͡�˹���÷ӧҹ ��
        ���������͡ 1 ���� ����������� �Ѻ����������� ��� ��С�õ����.�Դ(�������ͧ��Դ�����:: app)
        ���������͡ 2  �����ҹ������� ���͡��
         ���������͡  3 ����͡

