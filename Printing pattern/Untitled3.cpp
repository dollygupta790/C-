#include <iostream>
using namespace std;
int main()
{
int n, x, y;
cout << "Enter the number of rows to show number pattern: ";
cin >> n;
for(x = 1; x <= n; x++)
{
for(y = 1; y <= n; y++)
{
if(y <= x)
cout << y;
else
cout << " ";
}
for(y = n; y >= 1; y--)
{
if(y <= x)
cout << y;
else
cout << " ";
}
cout << "\n";
}
return 0;
}