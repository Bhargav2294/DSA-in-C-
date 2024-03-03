#include<bits/stdc++.h>
using namespace std;

int main()
{
    FILE *filePointer;
    const char *filename = "input.txt";

    filePointer = fopen(filename, "w"); 

    if (filePointer == NULL)
    {
        cout << "Unable to open file." << endl;
        return 1;
    }

    fprintf(filePointer, "Hello connection welcome to here\n");
    fprintf(filePointer, "I created this file using fopen\n");
    fprintf(filePointer, "You can write anything here\n");

    fclose(filePointer);

    cout << "Content written to the file successfully." << endl;

    return 0;
}
