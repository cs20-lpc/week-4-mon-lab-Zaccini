#include "LinkedList.hpp"
#include <string>


int main() {
    LinkedList<int> n;
    n.append(1);
    n.append(2);
    n.append(3);
    n.append(4);
    cout<< "Current list: " << n << endl;

    n.replace(0, 9);
    cout<<"List after replacing element 0 with the number 9: " << n << endl;

    cout << "Element 3: " << n.getElement(3) << endl;

    cout << "Clearing list... \n";
    n.clear();
    cout << n;

    return 0;
}