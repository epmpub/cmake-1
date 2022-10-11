#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto v = std::vector<int>(10);
    for(auto i:v)
    {
        cout << i << "\n";
    }

    cout << "GCC-11" << "\n";
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     printf("Hello Echo\n");
//     return 0;
// }