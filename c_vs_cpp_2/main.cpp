#include <iostream>

char c;

int main(void)
{
    using namespace std;

    /*In cpp, tag identifier is declared to be typedef name automatically.*/
    struct c
    {
        int arr[10];
    };

    size_t size = sizeof(c);

    string res = (size == 1) ? "" : "++";

    cout << "C" << res << endl;

    return 0;
}
