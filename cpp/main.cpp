#include <iostream>
#include <cctype>
// int main(){
//   int num1 = 15, num2 = 100;
//   std::cout << "num1 before: " << num1 << "\n";

//   // assign value of num2 to num1
//   num1 = num2;

//   std::cout << "num1 after: " << num1 << "\n";

//   return 0;
// }

// int main()
// {
//   int age;
//   std::cout << "Enter a number: ";
//   std::cin >> age;

//   std::cout << "Integer input: " << age;
//   return 0;

// }

// int main()
// {
//     float a,b;
//     std::cout<<"enter a first digit"<<"\n";
//     std::cin>>a;
//     std::cout<<"enter a second digit"<<"\n";
//     std::cin>>b;

//     // std::cout<<a<<"\n";
//     // std::cout<<b<<"\n";

//     // addition
//     a += b;
//     std::cout<<"sum of a and b is: "<<a<<"\n";

//     // subtration
//     a = 10 - (4 * 2);
//     std::cout<<"difference of a and b is: "<<a<<"\n";

//     //multiplication
//     double mul;
//     mul = a * b;
//     std::cout<<"multiplication of a and b is: "<<mul<<"\n";

//     //qoution
//     double qout;
//     qout = a / b;
//     std::cout<<"division of a and b is: "<<int(qout)<<std::endl;

//     //remainder
//     int rem;
//     rem = int(a) % int(b);
//     std::cout<<"reaminder of a and b is: "<<rem;

// }

// int main()
// {
//     double num1 = 5.4, num2 = 10.55;

//     // convert to int type
//     int data1 = int(num1);
//     int data2 = (int)num2;

//     std::cout<<data1<<"\n";
//     std::cout<<data2;

//     return 0;
// }

// int main(){
//     double a,b,product;
//     std::cout<<"enter first number: "<<"\n";
//     std::cin>>a;
//     std::cout<<"enter second number: "<<"\n";
//     std::cin>>b;

//     // product = a * b;
//     // std::cout<<"the product of two digits are: "<<product;

//     ++a;
//     --b;

//     std::cout<<a<<std::endl;
//     std::cout<<b<<"\n";

//     std::cout<<sizeof(a);

//     return 0;
// }

// int main()
// {
//     int a = 5,b = 2;
//     std::cout<<"a (before swap) "<<a<<std::endl;
//     std::cout<<"b (before swap) "<<b<<std::endl;

//     int temp = a;
//     a = b;
//     b = temp;

//     std::cout<<"a (after swap) "<<a<<std::endl;
//     std::cout<<"b (after swap) "<<b;

//     return 0;
// }

// int main(){
//     int a = 7;

//     std::cout<<(a > 4)<<std::endl;
//     std::cout<<(a >= 7)<<std::endl;

//     return 0;
// }

// // AND operator (&&)

// int main()
// {
//     int age = 24, salary = 950, result;

//     result = (age >= 18) && (salary > 600);
//     std::cout << result << std::endl;

//     result = (age >= 18) && (salary > 1000);
//     std::cout << result;

//     return 0;
// }
// // OR operator (||)

// int main()
// {
//     int age = 24, salary = 950, result;

//     result = (age >= 18) || (salary > 600);
//     std::cout << result << std::endl;

//     result = (age >= 30) || (salary > 1000);
//     std::cout << result;

//     return 0;

// }

// int main()
// {
//     int age = 24,result;

//     std::cout << !(age >= 18) << std::endl;
//     std::cout << (age >= 24);

//     return 0;
// }

// int main()
// {
//     int number;
//     std::cout << "enter the number: "<< std::endl;
//     std::cin >> number;

//     if (number > 0){
//         std::cout << "The number is positive"<<std::endl;
//     }
//     else if (number == 0){
//         std::cout << "this is zero" << std::endl;
//     }
//     else{
//         std::cout << "The number is negative."<<std::endl;
//     }

//     std::cout << "code outside a if block";

//     return 0;
// }

// int main(){
//     for (int i = 0; i < 3; ++i){
//         std::cout<< "loop is easy\n";

//     }

//     std::cout << "numbers are: ";
//     for (int i = 1;i <= 4; ++i){
//         std::cout << i << ",";
//     }

//     return 0;

// }

// int main() {
//   int first, second;
//   std::cout << "Enter first number: ";
//   std::cin >> first;
//   std::cout << "Enter second number: ";
//   std::cin >> second;

//   if (first > second) {
//     std::cout << first << " is greater than " << second;
//   } else if (second > first) {
//     std::cout << second << " is greater than " << first;
//   } else {
//     std::cout << first << " and " << second << " are equal.";
//   }

//   return 0;
// }

// int main() {
//   double num1, num2, num3;
//   std::cout << "Enter three numbers: ";
//   std::cin >> num1 >> num2 >> num3;

//   if (num1 >= num2 && num1 >= num3) {
//     std::cout << float(num1) << " is largest among all numbers";
//   } else if (num2 >= num1 && num2 >= num3) {
//     std::cout << (float)num2 << " is largest among all numbers";
//   } else {
//     std::cout << (float)num3 << " is largest among all numbers";
//   }

//   return 0;
// }

// int main() {
//   int num;
//   std::cout << "Enter a number: ";
//   std::cin >> num;

//   int fact;
//   fact = 1;

//   if (num < 0) {
//     std::cout << "Error!";
//   } else {
//     for (int i = 2; i <= num; i++) {
//       fact *= i;
//     }

//     std::cout << "Factorial of " << num << " is " << fact;
//   }

//   return 0;
// }

// int main() {
//   int num;
//   int i;
//   std::cout << "Enter a number: ";
//   std::cin >> num;

//   std::cout << "Factors of " << num << " are: ";

//   for (i = 1; i <= num; i++) {
//     if (num % i == 0) {
//       std::cout << i << ", ";
//     }
//   }
//   return 0;
// }

// int main() {
//   for (int i = 1; i <= 2; i++) {
//     for (int j = 1; j <= 3; j++) {
//       for (int k = -1; k >= -4; k--) {
//         std::cout << " i = " <<i<<" j = "<<j<<" k = "<<k<<"\n"<<std::endl;
//       }
//     }
//   }
//   return 0;
// }


                                        // functions


// void greet(){
//     std::cout<<"Hello, how are you?";
// }

// int main(){

//     greet();

//     return 0;
// }

// void add_numbers(int num1, int num2) {
//   int sum = num1 + num2;
//   std::cout << "SUM = " << sum;
// }

// int main() {
//   int a;
//   int b;
//   std::cout << "enter first number: ";
//   std::cin >> a;
//   std::cout << "enter second number: ";
//   std::cin >> b;

//   add_numbers(a, b);
//   return 0;
// }

// int add_numbers(int num1, int num2) {
//   int sum;
//   sum = num1 + num2;
//   return sum;
// }

// int main() {
//   int a;
//   int b;
//   int result;
//   std::cout << "enter first number: ";
//   std::cin >> a;
//   std::cout << "enter second number: ";
//   std::cin >> b;

//   result = add_numbers(a, b);
//   std::cout<<"sum = "<<result;
//   return 0;
// }

// double add_numbers(double num1, double num2) {
//   double sum;
//   sum = num1 + num2;
//   return sum;
// }

// double subtract_num(double num1, double num2){
//     double sub;
//     sub = num1 - num2;
//     return sub;
// }

// int main() {
//   double a;
//   double b;
//   double result;
//   double result2;
//   std::cout << "enter first number: ";
//   std::cin >> a;
//   std::cout << "enter second number: ";
//   std::cin >> b;

//   result = add_numbers(a, b);
//   std::cout<<"sum = "<<result<<"\n";
//   result2 = subtract_num(a, b);
//   std::cout<<"difference = "<<result2;
//   return 0;
// }

// #include <cmath>

// int main(){
//     int num = 25;
//     double square_root;

//     square_root = sqrt(num);
//     std::cout<< square_root;

//     return 0;
// }

// int main(){
//     int num = 25;
//     double square_root;

//     square_root = sqrt(num);
//     std::cout<< square_root;

//     return 0;
// }

// int main(){
//     char c1;
//     std::cin>>c1;

//     if (isdigit(c1)){
//         std::cout<<c1<<" is a numeric character";
//     }else{
//         std::cout<<c1<<" is a non-numeric character";
//     }
//     return 0;
// }

// int add_numbers(int num1,int num2){
//     return num1 + num2;
// }
// int multiply_num(int num1, int num2){
//     return num1 * num2;
// }

// int main(){
//     int num1;
//     int num2;

//     std::cout<<"Enter a first number: ";
//     std::cin>>num1;
//     std::cout<<"Enter a second number: ";
//     std::cin>>num2;

//     int add = add_numbers(num1, num2);
//     int multi = multiply_num(num1, num2);

//     std::cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<add<<".\n";
//     std::cout<<"The product of "<<num1<<" and "<<num2<<" is "<<multi;

// }

// int check_prime(int n){

//     if (n == 0 || n == 1){
//         return 0;
//     }

//     if (n % 2 == 0){
//         return 0;
//     }
//     return 1;
// }

// int check_prime(long int n){

//     if (n == 0 || n == 1){
//         return 0;
//     }

//     for (long int i = 2 ; i < n ; i++){
//         if(n % 2 == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     bool result = check_prime(4587126222);

//     if (result == 1){
//         std::cout<<"Prime number";
//     }else{
//         std::cout<<"non-prime number";
//     }
// }
// double pow(double num1, double num2)
// {
//     double temp;
//     temp = 1;
//     for (double i = num2; i > 0; i--)
//     {
//         temp *= num1;
//     }
//     return temp;
// }

// int main()
// {
//     double num;
//     num = pow(2, 8);
//     std::cout << num;

//     return 0;
// }


                                            // arrays operations


// int main(){
//     int x[5] = {12, 19, 13, 12,17};
//     int data[5] = {19, 20 ,30 ,19, 15};

//     // std::cout<<data[0]<<" is first element of data array"<<std::endl;
//     // std::cout<<data[1]<<" is second element of data array"<<std::endl;
//     // std::cout<<data[2]<<" is third element of data array"<<std::endl;
//     // std::cout<<data[3]<<" is fourth element of data array";

//     for (int i = 0;i <= 4; i++){
//         std::cout<<data[i]<<std::endl;
//     }
// }

// int main(){
//     int data[] = {12,19,13,14,17};

//     data[2] = 10;
//     data[4] = 100;

//     for (int i = 0; i < 5; i++){
//         std::cout<<data[i]<<std::endl;
//     }
// }

// int main()
// {
//     int data[3];

//     std::cout << "Enter 3 elements: " << std::endl;
//     for (int i = 0; i < 3; i++)
//     {
//         std::cin >> data[i];
//     }

//     std::cout << "Arrays elements are: ";
//     for (int i = 0; i < 3; i++)
//     {
//         std::cout << data[i] << ", ";
//     }

//     return 0;
// }

// int main()
// {
//     int num[5] = {45, 39, 32, 29, 41};
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         sum += num[i];
//     }

//     std::cout << "Sum = " << sum << std::endl;

//     return 0;
// int main()
// {
//     int n[] = {13, 32, 23, 19, 35};

//     for (int i : n)
//     {
//         std::cout << "var = " << i << std::endl;
//     }
// }
// int main(){
//     int data[3][4]{
//         {1,2,3,4},
//         {4,5,6,6},
//         {7,8,9,7}
//     };

//     for (int i = 0;i < 3;i++){
//         for (int j = 0; j < 4; j++)
//         {
//             std::cout<<data[i][j]<<" ";
//         }
//         std::cout<<std::endl;
//     }

//     return 0;
// }

// int main(){
//     int arr[5] = {1,43,-56,23,4};
//     // for (int i : arr){
//     //     std::cin>>arr[i];
//     // }

//     int largest = arr[0];

//     for (int i = 0;i < 5; i++){
//         if (arr[i] > largest){
//             largest = arr[i];
//         }
//     }

//     std::cout<<"Largest element = "<< largest;

//     return 0;
// }

// int main(){
//     double arr[5] = {1.2,3.63,.326,2.563,.52};

//     std::cout<<"Array elements = ";
//     for (double item : arr){
//         std::cout<<item<<", ";
//     }

//     return 0;
// }

                                                    // pointers

// int main(){
//     int var;
//     var = 5;

//     std::cout<<"var = "<<var<<std::endl;

//     std::cout<<"address of var = "<<&var;

//     return 0;
// }

// int main(){

    // int* ptr;

    // int *ptr;

    // int* ptr1 ,ptr2;

//     int* pc, c;
//     c = 5;

//     pc = &c;

//     std::cout<<"value of pc = "<<pc<<"\n";

//     std::cout<<"address of c = "<<&c<<"\n";

//     std::cout<<"value stored in pc address of c = "<<*pc;
//     return 0;


// }

// int main(){
//     int *pc, c = 22;

//     std::cout<<"Address of c: "<< &c <<std::endl;

//     std::cout<<"Value of c: "<< c <<std::endl;

//     pc = &c;

//     std::cout<<"content of c: "<< pc <<std::endl;
//     std::cout<<"Value stored in pc address: "<< c <<std::endl;

//     c = 11;
//     std::cout<<"Value stored in pc address: "<< *pc <<std::endl;

//     *pc = 2;
//     std::cout<<"Value of c: "<< c <<std::endl;

//     return 0;
// }

// int main(){
//     int x[3];
//     for(int i = 0;i < 4;i++){
//         std::cout<<"&x[" << i << "] = "<<&x[i]<<std::endl;
//     }

//     std::cout<<"address of array x: "<< x;

//     return 0;
// }


// int main(){
//     int x[4] = {10,20,30,40};

//     std::cout<<"Second element: "<<*(x + 1)<<std::endl;

//     *(x + 2) = 100;

//     std::cout<<"Third element: "<<x[2] <<std::endl;

//     std::cout<<"Enter the fourth element: ";
//     std::cin>> *(x + 3);
//     std::cout << "Fourth element: "<<x[3];

//     return 0;
// }

// void change_value(int* ptr){
//     *ptr = 100;
// }

// int main(){
//     int number = 5;
//     std::cout<<"number (before): "<<number<<std::endl;

//     change_value(&number);

//     std::cout<<"number (after): "<<number;

//     return 0;
// }

// int* add_ten(int* data){
//     for (int i = 0;i < 5;i++){
//         *(data + 1) = *(data + i) + 10;
//     }
//     return data;
// }

// int main(){
//     int data[5] = {1,2,3,4,5};
//     int *result;

//     result = add_ten(data);

//     for (int i = 0; i < 5; i++){
//         std::cout<<*(result + i)<< ", ";
//     }

//     return 0;
// }