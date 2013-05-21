//missing ')'
/*
#include <iostream>
int main(
{
    return 0;
}
*/
/*
// error: used colon, not a semicolon
#include <iostream>
int main()
{
    std::cout << "Read each file." << std::endl:
    return 0;
}
*/
/*
// error: missing quotes around  string literal
#include <iostream>
int main()
{
    std::cout << Read each file. << std::endl;
    return 0;
}
*/
/*
// error: missing ';' on return
int main()
{
    return 0
}
*/
/*
// type error
int main()
{
    int i;
    i = "string";
    return 0;
}
*/

//statement error
int main()
{
    i = "string"; // i has not state
    cout << i;     // cout is std namespace.
    return 0;
}
