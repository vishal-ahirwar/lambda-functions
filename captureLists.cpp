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
        a+=a;
        b+=b;

        std::cerr<<"\ncalling funcRef ...\n";
     std::cerr<<"a : "<<a<<" b : "<<b<<"\n";

    };

    funcLoc();
    funcRef();
    a+=a;
    b+=b;
    funcLoc();
    funcRef();

    //Capture all by value
    int x{120},y{120},z{120};
    auto funcAll = [=]()
    {
        std::cerr<<"x= "<<x<<"y= "<<y<<"z= "<<z<<"\n";

    };
    // funcAll();


    //Capture all by reference
    auto funcAllRef =[&]()
    {
         std::cerr<<"x= "<<x<<"y= "<<y<<"z= "<<z<<"\n";
    };


    // for( ; x<150 ; )
    // {
    //     // funcAll();
    //     funcAllRef();
    //     ++x;
    // };



    return 0;
}