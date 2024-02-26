#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> arr;

    cout << endl
         << "Vector 1 " << endl;
    // assining values
    arr.push_back(10);
    arr.push_back(9);
    arr.push_back(8);
    arr.push_back(7);

    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << endl
         << "\nVector 2" << endl; // initialised using curly braces

    vector<int> brr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < brr.size(); i++)
        cout << brr[i] << " ";

    cout << endl
         << "\nVector 3" << endl; // initialised using curly braces

    vector<int> crr(10, -1); // size = 10 , and assigns -1 to all 10 spaces
    for (int i = 0; i < crr.size(); i++)
        cout << crr[i] << " ";

    cout << "\nCheck whether the vector is empty or not : \n\n";
    vector<int> vec;
    vector<int> vec1(10, 0);
    cout << "Vec is " << vec.empty() << " (that is empty) ";
    cout << "Vec is " << vec1.empty() << " (that is filled) ";
    return 0;
}