using namespace std;





//                 //exersize 1
// void function1( int n)
// {
//    if ( n < 10 )
//    {
//       cout << "'" << n << "'";
//    }
//    else
//    {
      
//       function1( n / 10);
//        cout << "'" << n % 10 << "' ";
//    }
// }

//                 //exersize 2
// void function2( int n )
// {
//    if ( n < 10 )
//    {
//       cout << "'" << n << "'";
//    }
//    else
//    {
//        cout << "'" << n % 10 << "' ";
//       function2( n / 10 );
     
//    }
// }

//                 exersize 3
// int function3(int n)
// {   
//     int tmp;
//     int sum = 0;
//     while(n > 0)
//     {   
//         tmp = n % 10;
//         sum += tmp;
//         n/= 10; 
//     }
//     return sum;
// }

//                 exersize4
// int function4(int n)
// {   
//     int tmp;
//     int mul = 1;
//     while(n > 0)
//     {   
//         tmp = n % 10;
//         mul *= tmp;
//         n/= 10; 
//     }
//     return mul;
// }

//                 exersize5
//     void calc(float a,float b,char s)
//     {
//         switch(s)
//         {
//             case '+' :
//                 cout << a << " + " << b << " = " <<a+b;
//                 break;
//             case '-' :
//                 cout << a << " - " << b << " = "<< a-b;
//                 break;
//             case '*' :
//                 cout << a << " * " << b << " = "<< a*b;
//                 break;
//             case '/' :
//                 cout << a << " / " << b << " = " <<a/b;
//                 break;
//         }
//     }
//                     exersize 6

// void reverse_name(char arr[] , int s)
// {
//    if(arr[0] == '\0'){return;}
//    for(int i = s ; i >= 0; --i)
//    {
//        cout << arr[i];
//    } 
// }

//                     exersize 7
//  void delete_vowels(char str[],int s)
//      {
//          int i;
//          int j;
//          for(i=0; i<s; i++)
//          {
// 	 if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y')
// 		{ 
// 			for(j=i; j<s; j++)
// 			{
// 				str[j]=str[j+1];
// 			}
// 		i--;
// 		s--;
// 		}
// 	}
// 	cout<<"After deleting the vowels, the string will be : "<<str;
//                     }

//                     exersize 8
// void upper_string(char arr[])
// {
// 	for(int i=0;arr[i]!='\0';i++)
// 	{
// 		if (arr[i] >= 'a' && arr[i] <= 'z')   
// 			arr[i] = arr[i] - 32;       
// 	}
// 	cout<<"\n The string in upper case: "<< arr;
// }

//                     exersize 9

// void upper_second_string(char arr[])
// {
// 	for(int i=0;arr[i]!='\0';i++)
// 	{
// 		if (arr[i] >= 'a' && arr[i] <= 'z')   
// 			arr[i] = arr[i] - 32;       
// 	}
// 	cout<<"\n The string in upper case: "<< arr;
// }
//                     exersize 10

//     float km_function(float n)
//     {
//         float km;
//         km = n/1000;
//         return km;
//     }
//                 exersize 12 ??????????

//     int max_numbers(int n)
//     {
//         int x = 0;
//         while(n > 0)
//         {
//         int max = n % 10;
        
//         if(max > x){
//             x = max;
//         }
//         n /= 10;
//         }
//         return max;

        

//     }


//                     exersize 16,17,18,19

//     int find_max_index(int arr[],int s)
//     {
//         int max = arr[0];
//          int count_max = 0;
//         if(s < 0){return 0;}
//         for(int i = 1; i < s; ++i)
//         {
//             if(arr[i] > max){
//                 max = arr[i];
//                 count_max = i;
//             }
            
//         }
//         return count_max;
        
//     }

//       int find_min_index(int arr[],int s)
//     {
//         int min = arr[0];
//          int count_min = 0;
//         if(s < 0){return 0;}
//         for(int i = 1; i < s; ++i)
//         {
//             if(arr[i] < min){
//                 min = arr[i];
//                 count_min = i;
//             }
            
//         }
//         return count_min;
        
//     }

//      int find_max(int arr[],int s)
//     {
//         int max = arr[0];
//         if(s < 0){return 0;}
//         for(int i = 1; i < s; ++i)
//         {
//             if(arr[i] > max){
//                 max = arr[i];
//             }
            
//         }
//         return max;
        
//     }

//     int find_min(int arr[],int s)
//     {
//         int min = arr[0];
//         if(s < 0){return 0;}
//         for(int i = 1; i < s; ++i)
//         {
//             if(arr[i] < min){
//                 min = arr[i];
//             }
            
//         }
//         return min;
        
//     }

//     exersize 22,23,24,25 ??????????

    // void first_array_matrix(int** arr ,int row,int col)
    // {
    //     //first
    //     int sum = 0;
    //     for(int i = 0; i < row; ++i)
    //     {
    //         cout << arr[i][i] << "\t";
    //         sum+= arr[i][i];
    //     }
        
    //     //second
    //     for (int i = 0; i < row; ++i)
    //     {
    //         for (int j = col; j >=0; --j)
    //         {
    //             if(i+j == row-1)
    //             {
    //                 cout << arr[i][j];
    //                 sum+= arr[i][j];
    //             }
    //         }
    //     }
    //     cout << sum;
    // }

//     exersize 26

//     int qarak_funct(int a,int b,int c)
//     {
//         return a*a + 2 * a * b + b * b;
//     }

//     exersize 28,29

//     int odd_array_count(int arr[],int s)
//     {
//         int count = 0;
//         if(s < 0){return 0;}
//         for(int i = 0; i < s; ++i)
//         {
//             if(arr[i] % 2 == 0)
//             {
//                 count ++;
//             }
//         }
//         return count;
//     }

//      int pair_array_count(int arr[],int s)
//     {
//         int count = 0;
//         if(s < 0){return 0;}
//         for(int i = 0; i < s; ++i)
//         {
//             if(arr[i] % 2 != 0)
//             {
//                 count ++;
//             }
//         }
//         return count;
//     }

//     exersize 31

    // void repeat_char(char arr[],int s)
    // {
        
    //     if(s < 1){return ;}
    //     for(int i = 0; i < s; ++i)
    //     {
    //         for(int j = i + 1; j < s; ++j)
    //         {
    //             if(arr[i] == arr[j])
    //             {
    //                 cout << arr[i];
    //             }
    //         }
    //     }
    // }

//     exersize 33

//     bool parz_tiv(int n)
//     {
//         for(int i = 2; i < 10; ++i)
//         {
//             if(n % i == 0)
//             {
//                 return false;
//             }
            
//                 return true;
            
            
            
//         }
//     }

    
// exersize 40,41


// int fact_rec(int n)
// {
//     if(n == 0){return 1;}

//     return n * fact_rec(n-1);
    
// }

// void print_num(int n)
// {
//     if(n < 0){return;}
//     cout << n;
//     print_num(n-1);
// }

// exersize 40,41

// int fib(int n)
// {
//     if(n <= 1){return n;}
//     return fib(n-1) + fib(n-2);
// }

// exersize 46

// void print_array_elem(int* arr,int s)
// {
//     if(s < 1){return;}
//     cout << *arr;
//     print_array_elem(arr+1,s-1);

// }

// exersize 47

// void swap_string(char* arr,int s)
// {
    
//     for(int i = s; i >= 0; --i)
//     {
//         cout << arr[i];
//     }
// }

// exersize 48

int* new_array(int* arr,int index,int s)
{
   int* sec_arr = new int[30];
   std::cout << "sec_arr size is  " << sizeof(sec_arr);
     for(int i = 0; i < s;++i)
     {
        if(i == index)
        {
         continue;
        }
        if (i > index)
        {
             sec_arr[i-1] = arr[i];
        }
        
        
            sec_arr[i] = arr[i];
        
        
     }
    std::cout << "sec_arr size is  " << sizeof(sec_arr) <<endl;
    std::cout << "sec_-arr[9] is " << sec_arr[9] <<std::endl;

    return sec_arr;
}



// exersize 49
// int veradardz_k(int num,int k)
// {
//     if((num == 0) || (k == 0)){return 0;}
//     for(int i = 0; i < k; ++i)
//     {
//         num = num / 10;
//     }

//     return num;
// }

// exersize 50

// int exe_50(int* arr,int s)
// {
//     if(s == 0){return 0;}
//     int sum = 0;
//     int mul = 1;
//     int sml = 0;
//     for(int i = 0; i < s; ++i)
//     {
//         sum += arr[i];
//         mul *= arr[i];
//     }

//     sml = (sum + mul) / 2;
//     return sml;
// }