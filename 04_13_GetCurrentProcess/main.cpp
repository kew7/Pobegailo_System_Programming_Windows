#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
  HANDLE  hProcess;

  // �������� ���������������� �������� ��������
  hProcess = GetCurrentProcess();
  // ������� ���������������� �� �������
  cout << hProcess << endl;

  cin.get();

  return 0;
}