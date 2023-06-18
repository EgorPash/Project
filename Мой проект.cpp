#include <iostream>
#include <myfunc.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>

using namespace std;

void printhelp()
{
  cout<<"Вычисление среднего, дисперсии и среднеквадратичного оклонения\n"; // название задания
  cout<<"Использование:\n";
  cout<<"test -o <файл с числами> -f <1(среднее|2(дисперсия)|3(ср.отклонение))>\n";
  
}

void printerror()
{
  cout<<"Неправильное использование\n";
  printhelp();
}
int main(int argc, char *argv[])
{

const int size = 100;
int* arr = new int[size];

string text;
int argument;
int rs;
while((rs = getopt(argc, argv, "o:f:h")) != -1)
 {
 switch(rs)
 {
 case 'h':
 printhelp();
 break;
 case 'o':
 //text = atoi(optarg);
 for(int i=0;i<sizeof(optarg);i++)
 {
 text.push_back(optarg[i]);
 }
 break;
 case 'f':
 argument = atoi(optarg);
 
 break;

 }
}
ifstream ifs(text);
int q,k;
double l=0;
double ll=0;
for ( q = 0; ifs >> arr[q]; ++q);
ifs.close();

if(argument==1)
{
  cout<<endl;
for (int i = 0; i < q; i++)
    {
        cout << arr[i]<<" ";
    }
k = sredn(arr, q);
cout <<endl<<k;
} else if(argument==2)
{
  cout<<endl;
   for (int i = 0; i < q; i++)
    {
        cout << arr[i]<<" ";
    }
    l=disp(arr,q);
    cout<<endl<<l;
} else if(argument==3)
{
  cout<<endl;
   for (int i = 0; i < q; i++)
    {
        cout << arr[i]<<" ";
    }
    ll=sreot(arr,q);
    cout<<endl<<ll;
}

}