// #include<iostream>
// using namespace std;

// void towerOfHanoi(int n,char source,char helper,char destination){

//     if(n==1)
//         cout << "move from " << source << " to " << destination << endl;

//     else{
//         move(n-1,source,destination,helper);
//         move(1, source, helper,destination);
//         move(n-1,helper,source,destination);
//     }

// }

// int main(){

//     int n;
//     cout << "enter the number" << endl;
//     cin >> n;
//     towerOfHanoi(n,'S','H','D');

// }

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination)
{

    if (n == 1)
    {
        cout << "transfer disk " << n << " from " << source << " to " << destination << endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, helper);
    cout << "transfer disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    towerOfHanoi(n, 'S', 'H', 'D');
}