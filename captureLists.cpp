#include<iostream>
int main(void)
{
    double a{1},b{5};

    auto funcLoc =[a,b]()->void
    {
        std::cerr<<"\ncalling funcLoc ...\n";

        std::cerr<<"a : "<<a<<" b : "<<b<<"\n";
    };

    auto funcRef =[&a,&b]()
    {
        std::cerr<<"\ncalling funcRef ...\n";
     std::cerr<<"a : "<<a<<" b : "<<b<<"\n";

    };

    funcLoc();
    funcRef();
    a+=a;
    b+=b;
    funcLoc();
    funcRef();



    return 0;
}