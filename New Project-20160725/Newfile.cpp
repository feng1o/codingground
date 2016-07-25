#include <iostream>

using namespace std;
void fun(char **p){
    char a[3] ="ab";
    int i;
    for(i=0,*p = a; i<2; ++i){
        (*p)[i] = a[i];
    }
}

int main()
{
   cout << "Hello World" << endl; 
   char *p="cd";
   cout << p << endl;
   fun((char**)(&p));
   cout << p << endl;
   return 0;
}
