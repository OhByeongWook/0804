#include <string>
#include <cstdio>
#include <iostream>

int main()
{
    int nAge;
    std::cout << "나이를 입력하세요." << std::endl;
    std::cin >> nAge;

    std::string strName;
    std::cout <<"이름을 입력하세요." << std::endl;
    std::cin >> strName;

    std::cout <<"당신의 이름은 " << strName << "이고, " << "나이는 " << nAge << "살입니다. " << std::endl;

    return 0;
}
