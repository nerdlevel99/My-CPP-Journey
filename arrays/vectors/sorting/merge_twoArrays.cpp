#include <iostream>
using namespace std;
int main()
{
    int arr1[] = { 1 , 5 , 9 , 13 , 17 , 21 };
    int arr2[] = { 2 , 8 , 10 , 11  , 18 , 19 };
    int result[12];

    int i = 0  , j = 0 , k = 0;
    int size_1 = 6;
    int size_2 = 6;
    
    while (j < size_2 && i < size_1)
    {
        if(arr1[i] < arr2[j])
        {
            cout<< arr1[i] <<" is smaller than " << arr2[j] << endl;
            result[k] = arr1[i];
            cout<<"Result [k] == " << result[k] << endl;

            i++;
            k++;
        }

        else{
            result[k] = arr2[j];
            j++;
            k++;
        }

        
    }


    cout<<"----------------------------\n Outside loop : value of i = " << i << " j = " << j << " k = " << k << "\n -------------------------\n";
    while(i < size_1 )
    {
        result[k] = arr1[i];
        i++;
        k++;
    }

     while(j < size_2 )
    {
        result[k] = arr2[j];
        j++;
        k++;
    }

   for(int i =0 ; i < size_1 + size_2 ; i++)
   {
    cout<< result[i] << " ";
   }
    
    return 0;
}