#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string line;
    ifstream myfile ("example.txt");

if (myfile.is_open())
{
    while (getline (myfile,line)) /*�ҹ������ ������ ... �����Ѻ�繨�ԧ*/
    {
        cout <<line<<'\n'; /*���ǡ���ʴ��͡�� */

    }  /*��Ѻ���价������ա�ͺ*/
    myfile.close(); /*Դ���*/
}
else cout << "unable to open file";
return 0;
}


/*
��С�õ����
���ҧ���͹� ���͡����ҹ���
��Ҩ����ٻ���
��ѧ�ѹࡴ� ��ҹ��ҷ����� ��÷Ѵ
��Ш��������ŵ�ǹ�����

*/


