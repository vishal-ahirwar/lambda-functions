#include<iostream>
int main(void)
{
    //lambda function -->1
    auto helloWorld =[]()->void
    {
        std::cout<<"Hello, World!\n";
    };

    helloWorld();
    // helloWorld();

    //lambda function -->2
    []()
    {
        std::cout<<"Hello, World Again!\n";
    }();

    //lambda function -->
    auto call =[](const char*str1,const char*str2)
    {
        std::cout<<str1<<" "<<str2<<"\n";
    };

    call("Ahirwar", "Vishal.");
    call("TES : ","Vishal Ahirwar");
    call("SYSTEM","QUITING");

    //lambda function -->4
    auto res = [](const std::string&str1,const std::string&str2)->std::string
    {
        return str1+str2;
    }("----", " +++++");

    std::cout<<res<<"\n";


    return 0;

}