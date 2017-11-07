#include "std_lib_facilities.h"

int main()
try
{
    vector<string> s;
    s.push_back("Success!");
    for (int i=0; i<1; ++i)
        cout << s[0] << "\n";
    keep_window_open();
    return 0;
}
catch (exception& e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2; 
}