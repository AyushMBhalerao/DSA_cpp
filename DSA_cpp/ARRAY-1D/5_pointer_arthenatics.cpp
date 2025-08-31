// code to understand pointer arthematics 
// basic code to demonstrate the principal of the
// increament operator 
// #include <iostream>
// using namespace std;

// int main (){
//     int arr []=  { 3,4,5,6,7,8};
//     int * ptr = arr ; // declaring the pointer which is storing the adress of the arr [0]

//     ptr+=4; // so  we increasing the  pointer by 1 integer which convert to 4 bytes 

//     cout << *ptr << endl;   

//     return 0;
// }



//3. Addtition and Subtraction of the   pointer
// now understanding the addition and subtraction of the pointer 
// addition and suntraction of the pointer is only valild for the same data type 

#include <iostream>
using namespace std;

int main (){

    int n =21;
    int a =23;
    int *pointer = &n;
    int  *ptr=  & a;

    cout << ptr - pointer << endl;

    return 0;

}
// so after running the code the addition of two pointer 


// 4. Camparsion of pointer 






