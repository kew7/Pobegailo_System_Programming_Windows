#include <windows.h>
#include <iostream>
using namespace std;

// �������� ������� ��� ������ ��������� �� ������ �� �������
void CoutErrorMessage();

// ���� ��� ������� ������ ��������� �� ������ �� �������
int main()
{
  HANDLE  hHandle=NULL;

  // ������������ ����� ������� �������� �����������
  if (!CloseHandle(hHandle))
    CoutErrorMessage();

  return 0;
}