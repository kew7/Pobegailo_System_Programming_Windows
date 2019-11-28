#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
  char c;
  int  *p = NULL;  // ������ ��������� �� ����� �����

  // ������� 'y', ����� ������������ ������ ��� ����� �����
  cout << "Input 'y' to allocate memory: ";
  // ������ ������
  cin >> c;
  // ���� ����� 'y', �� ������ ��������������, ����� - �� ��������������
  if (c == 'y')
    p = new int;

  __try
  {
    *p = 10;  // ����� ���� ����������, ���� ������ �� ������������
  }
  __finally
  {
    // ���� ���� __try ���������� ���������
    if (!AbnormalTermination())
    {
      // �� ����������� ������
      delete p;
      cout << "The memory is free." << endl;
    }
    else
      // ����� ������ �����������
      cout << "The memory was not allocated." << endl;
  }

  return 0;
}