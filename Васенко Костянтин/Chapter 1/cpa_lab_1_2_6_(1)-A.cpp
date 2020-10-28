1)
#include <iostream>
using namespace std;
int main(void) {
 cout << "Welcome back, User! Have a nice session!";
 return 0; }

2)
#include <iostream>
using namespace std;
int main(void) {
 cout << "Welcome back, User! Have a nice session!";
 cout << "Welcome back, User! Have a nice session!";
 cout << "Welcome back, User! Have a nice session!";
 return 0; }

3)
#include <iostream>
using namespace std;
int main(void) {
 cout << "Welcome back, User! Have a nice session!";
 cout << endl;
 cout << "Welcome back, User! Have a nice session!";
 cout << endl;
 cout << "Welcome back, User! Have a nice session!";
 return 0; }

4)
#include <iostream>
using namespace std;
int main(void) {
 cout << "Welcome back, User! \nHave a nice session!";
 cout << endl;
 cout << "Welcome back, User! Have a nice session!";
 cout << endl;
 cout << "Welcome back, User! Have a nice session!";
 return 0; }

5)
main.cpp: In function ‘int main()’:
main.cpp:9:2: error: expected ‘;’ before ‘return’
  return 0; }

6)
/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crt1.o: In function `_start':
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status

7)
main.cpp: In function ‘int main()’:
main.cpp:9:2: error: expected primary-expression before ‘return’
  return 0; }