#ifndef TESTHEADER_H_INCLUDED
#define TESTHEADER_H_INCLUDED

namespace function_point
{
    int add(int a,int b)
    {
        return a+b;
    }
    int chuyi(int a,int b)
    {
        return a%b;
    }
}

namespace function_point1
{
    int add(int a,int b)
    {
        return a+b+5;
    }
    int chuyi(int a,int b)
    {
        return a%b+500;
    }
}

#endif // TESTHEADER_H_INCLUDED
