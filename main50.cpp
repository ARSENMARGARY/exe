#include <iostream>
#include <string>
using namespace std;
#include "prototype.h"
#include "implement.h"


 int main()
 {
// //exersize 1
// function1(23477);

// //exersize 2
// function2(998877);

//     exersize 3
//    int sum = function3(5479);
//     cout << sum;

//     exersize 4
//     int n = function4(342);
//     cout << n;

//     exersize 5
//    calc(4,5,'+');

//    exersize 6
//    char arr[] = "arsen";
//    int size = sizeof(arr)/sizeof(arr[0]);
//    reverse_name(arr,size);

//      exersize 7
//     char arr[] = "hello my brother";
//     int size = sizeof(arr)/sizeof(arr[0]);
//     delete_vowels(arr,size);

//     exersize 8
  //  char arr[] = "Hi...My name is ARSEN";
//     upper_string(arr);

//     exersize 9

// char arr[] = "Hi...My name is ARSEN";

//     exersize 10
//     float m = 1400;
//     float b = km_function(m);
//     cout << b;

//     exersize 12 ?????????
//     int s = max_numbers(32453);
//     cout << s;


//     exersize 16,17,18,19
//     int arr[] = {12,5433,34,676,34,533,0};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int max_index = find_max_index(arr,size);
//     int min_index = find_min_index(arr,size);
//     cout << max_index;
//    cout << min_index;
//     int sum_max_min = find_min(arr,size) + find_max(arr,size);
//     cout << sum_max_min;
//    swap_array(arr,size);

  // exersize 20,21,22,23,24,25 ??????????
//     int row = 4;
//      int col = 4;
//    int ** arr = new int*[col];
//    for (int i = 0; i < row; i++)
//    {
//      arr[i] = new int[col];
//    }
   
//    for(int i = 0; i < row;++i)
//    {
//      for(int j =0; j < col; ++j)
//      {
//        arr[i][j] = rand()%10;
//        cout << arr[i][j]<< '\t';
//      }
//    }

//    cout << "____________________________________"<<endl;

//  first_array_matrix(arr,row,col);

// exersize 26
//    int a = 3;
//    int b = 4;
//    int qarak = qarak_funct(a,b);
//    cout << qarak;

//  exersize 28,29

//  int arr[] = {11,5433,34,676,35,533,1};
//  int size = sizeof(arr)/sizeof(arr[0]);
//  int c = odd_array_count(arr,size);
//  int d = pair_array_count(arr,size);
//  cout << c;
//  cout << d;

// exersize 31

// char arr[] = "hellossssss my brother";
//      int size = sizeof(arr)/sizeof(arr[0]);
//      repeat_char(arr,size);

// exersize 33
// int n = 15;
// parz_tiv(!n) ? cout << "parz tiv" : cout << "bard tiv" ;


// exersize 34,35

// struct Student
// {
//   int age;
//   string name;
//   string surname;
// };

// Student boy;
// Student girl;
// Student boy_girl;

// boy.age = 25;
// boy.name = "Arsen";
// boy.surname = "Margaryan";

// girl.age = 19;
// girl.name = "Gayane";
// girl.surname = "Karapetyan";

// if(boy.age > girl.age){
//   cout << boy.age;
// }else{
//   cout << girl.age;
// }

// boy_girl.age = (boy.age + girl.age)/2;
// boy_girl.name = boy.name;
// boy_girl.surname = girl.surname;


// exersize 36,37 ?????????

// struct Point
// {
//   int x;
//   int y;
// };

// Point point;
// point.x = 1;
// point.y = 0;

// cout << "the coordinats is: x = " << point.x << " y = " << point.y << endl;

// struct Line
// {
//   Point point[10];
// };



// exersize 40,41
// int v = 8;
// int x = fact_rec(v);
// cout << x << endl;
// print_num(8);

// exersize 40,41

// int x = 9;
// cout << fib(x);


// exersize 46

// int arr[] = {1,2,3,4,5,6,5,4,3,2};
// int size = sizeof(arr)/sizeof(arr[0]);
// print_array_elem(arr,size);
 

// exersize 47


// char arr[] = "hello my freand";
// int size = sizeof(arr)/sizeof(arr[0]);
// swap_string(arr,size);



// exersize 48
int s = 10;
int* arr = new  int [s];
for(int i = 0; i < s; ++i)
{
  arr[i] = i;
  cout << arr[i] << '\t';
}
cout << endl;
 cout << "---------------------------------------------------------------------------" << endl;
int* k = new_array(arr,4,s);
for(int i = 0; i < s ; ++i){
  cout << k[i] << '\t';
}

cout << endl;
 cout << "---------------------------------------------------------------------------" << endl;

cout << endl;

// exersize 49

// int n = veradardz_k(56342,3);
// cout << n;

// exersize 50
//  int arr[] = {1,2,3,4};
//   int size = sizeof(arr)/sizeof(arr[0]);
//   int k = exe_50(arr,size);
//   cout << k;
 return 0;
 

 }