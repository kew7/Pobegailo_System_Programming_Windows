#include <windows.h>
#include <iostream>
#include <eh.h>
using namespace std;

void se_trans_func(unsigned code, EXCEPTION_POINTERS *)
{
  throw code;
}

int main()
{
  int a = 10, b = 0;
    
  // ������������� ������� ����������
  _set_se_translator(se_trans_func);
  // ������������� ����������� ���������� ���������� �++
  try
  {
    a /= b;    // ������, ������� �� ����
  }
  catch(unsigned code)
  {
    cout << "Exception code = " << hex << code << endl;
  }

  return 0;
}