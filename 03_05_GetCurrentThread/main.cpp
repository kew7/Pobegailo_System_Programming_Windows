#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
  HANDLE  hThread;

  // �������� ���������������� �������� ������
  hThread = GetCurrentThread();
  // ������� ���������������� �� �������
  cout << hThread << endl;

  cin.get();

  return 0;
}