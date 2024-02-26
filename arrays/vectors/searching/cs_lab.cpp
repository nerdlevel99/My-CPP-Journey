#include <iostream>
using namespace std;

void Print(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void Insert_last(int arr[], int *size)
{
    int element;
    cout << "Enter the element";
    cin >> element;
    int n = *size;
    arr[n] = element;
    (*size)++;
}

void Insert_first(int arr[], int *size)
{
    int element;
    cout << "Enter the element you want to add: ";
    cin >> element;

    (*size)++;

    for (int i = *size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = element;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int choice;

    while (1)
    {
        cout << "Make a choice :\n1. INSERT AT THE FIRST POSITION\n2. INSERT AT THE LAST POSITION\n3. INSERT AT A GIVEN POSITION\n4. DELETE A SAID ELEMENT\n5. DELETE THE DUPLICATE ELEMENTS\n6. FIND A GIVEN ELEMENT USING LINERS SEARCH\n7. SORT THE ARRAY AND STORE IN A DIFFERENT ARRAY\n8. FIND A GIVEN ELEMENT USING BINARY SEARCH\n9. DISPLAY THE ARRAY\n10. EXIT\nYour Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Insert_first(arr, &size);
            break;
        case 2:
            Insert_last(arr, &size);
            break;
        // case 3 : Insert_Pos(arr , size);
        // case 4 : Delete_element(arr , size);
        // case 5 : Delete_duplicates(arr , size);
        // case 6 : Linear_search(arr , size);
        // case 7 : Bubble_sort(arr , size);
        // case 8 : Binary_search(arr , size);
        case 9:
            Print(arr, size);
            break;
        case 10:
            exit(0);
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
