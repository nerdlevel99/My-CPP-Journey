
#include <iostream>
#include <string>
using namespace std;

void uppercase( string str)
{
    int i=0;
  while(str[i] !='\0')
  {
      if(str[i] >= 'a' && str[i] <='z')
      str[i] = str[i] -'a' +'A';
      i++;
  }
}


int main() {
    // Write C++ code here
    
    char abhi[100];
    string str;
    string str1;
    cout<<"Enter  string 1  : ";
    // cin.getline(abhi  , 100);
    getline(cin , str);
    
    cout<<"Enter  string 2  : ";
    getline(cin , str1);
    
    if(str.compare(str1) == 0) cout<<"Both strings are same " <<endl;
    else if(str.compare(0,4, str1 , 0 , 4) == 0) cout<<"Both contains the word abhi" <<endl;
    else cout<<"Nothing is same " <<endl;
    
    cout<<"Length is :  " << str.length() << endl;
    
    str.push_back('@');
    cout<<"after push_back:" << str <<endl;
    
    str.pop_back();
    cout<<"after poping:" << str <<endl;
    
    cout<<"substring from 1 to 6 : " << str.substr(0 , 6) <<endl;
    
    
    cout<<"After replacing : " << str.replace(0 , 4, "lord abhi") <<endl;
    
        cout<<"Capacity is : " << str.capacity() <<endl;
        
         str.erase(0,4);
    cout<<"After erasing first four characters : " <<str<<endl;
    
    if(str.find("sharma") <= str.length())
    cout<<"sharma starts at " << str.find("sharma")<<endl;
    
    
    
    else 
    cout<<"sharma is not present"<<endl;
    
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    abc.erase(0,4);
    cout<<abc<<endl;

    return 0;
}