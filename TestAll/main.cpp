#include <iostream>
#include "TestHeader.h"
using namespace std;


using namespace::function_point1;

int main()
{
    int (*pt)(int a,int b);
    pt=add;
    cout<<(*pt)(1,2)<<endl;
    pt=function_point::chuyi;
    cout<<(*pt)(1,2)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}


