#include <cstddef>
#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;
#include "lista.h"
#include "hashtablevd.h"
#include "bst.h"

int main(int argc, char * argv[]) {
  // Insertar los numeros solicitaddos
  BST<int> bst;
  string ans = "y";
  while(ans=="y") {
    cout << "Quiere agregar un numero?" << endl;
    cout << "y -- yes" << endl;
    cout << "n -- no" << endl;
    cin >> ans;
    if(ans=="y"){
    int i;
    cout << "Numero a insertar: ";
    cin >> i;
    bst.insert(i);
   }
  }
  cout << "------------------------------------------------------" << endl;
  bst.printPostorder();
  
  return 0;
}
