#include <iostream>
using namespace std;
int main(){

    int Count = 20;
    int n1 = 1;
    int n2 = 1;
    cout <<"1="<< n1 << ", " <<"2="<< n2;
    for (int i = 3; i <= Count; ++i) {
        int result = n1 + n2;
        cout << ", " <<i<<"="<< result;
        n1 = n2;
        n2 = result;
    }

    return 0;

}
