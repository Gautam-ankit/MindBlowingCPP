#include <iostream>
using namespace std;

int main() {
    cout<<"Happy coding";
	return 0;
}


/*

[Source Code] => [compiler] => [object file] =>
                                             |
[Source Code] => [compiler] => [object file] => [Linker] => [Executable file] => [Loader]
                                             |
[Source Code] => [compiler] => [object file] =>

*/


/*



                                    [IDE]
                                      |     (*.cpp), (*.h)
                                 preprocessor
                                      |     (*.i)
                                   compiler
                                      |     (*.s)
                                  Assembler
                                      |     (*.o)
                            Linker(static libraries)
                                      |
                            Loader(Dynamic libraries)
                                      |
                                     [OS]



*/