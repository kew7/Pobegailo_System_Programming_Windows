#include <windows.h>
#include <iostream>
using namespace std;

int main()
{

  char big[] = "�����Ũ��������������������������";
  char sml[] = "��������������������������������";

  CharToOem(big,big);
  CharToOem(sml,sml);

  cout << big << endl;
  cout << sml << endl;

  return 0;
}