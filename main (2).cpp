#include <iostream>

using namespace std;

int main()
{
    int make[10] = { 1, -5,6,1,-2,4,5,6, -12,87 };
    for (int i=0;i<10;i++){
    cout<< make[i]<<" ";
    }
    cout <<endl;
    
    
    int min=make[0];
    
   for (int i=1;  i < 10;i++) {
       if(min > make[i]) {
         min= make[i];
         cout<<"наименьший элемент массива"<< min;
         cout<<endl;
         
         
           
       }
   }
   
   cout<<min;
   
   cout<<endl;
   
   int max = make[0];
   
 for(int i=1;i<10;i++) {
 if(max < make[i]) {
    max = make[i];
    cout<<"нанаибольший элемент массива"  <<max;
    cout<<endl;

     }
  }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   return 0;
}
