#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{
public:
    CTest(void);
    int m_nData=5;
};

//z클래스 외부에서 디폴트 생성자 정의
CTest::CTest(void){}

int _tmain(int argc, _TCHAR *argv[]){
    CTest a;
    cout<<a.m_nData<<endl;

    return 0;
}