//
//  main.cpp
//  HM-23
//
//  Created by Дмитрий Сергеевич on 28.09.2023.
//

#include <iostream>
#include <cstdlib>
#include <ctime>



//task1
void find_max (int &a, int &b, int &c) {
    int maxVal = a;
    if(b > maxVal) {
        maxVal = b;
    }
    if ( c > maxVal) {
        maxVal = c;
    }
    
    a = maxVal;
    b = maxVal;
    c = maxVal;
}



//task2
int* findNegativeElement(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            return &arr[i];
        }
    }
    return &arr[0];
}


//task3
void nullifyArray(int* arr1, int arr1Length, int* arr2, int arr2Length) {
    for (int i = 0; i < arr1Length; i++) {
        for (int j = 0; j < arr2Length; j++) {
            if (arr1[i] == arr2[j]) {
                arr2[j] = 0;
                break;
            }
        }
    }
}





//task 1
int main(int argc, const char * argv[]) {
    int x = 10, z = 15, j = 23;
    find_max(x, z, j);
    
    std::cout << "x = " << x << " z = " << z << " j = " << j << std::endl;
    
    
    //task2
        int arr[] = {1, 2, -3, 4, 5, 6};
        int length = sizeof(arr) / sizeof(arr[0]);

        int* result = findNegativeElement(arr, length);

        std::cout << "First negative element or first element if no negative elements found: " << *result << std::endl;
    
    
    //task3
    srand(time(NULL));
       
       const int arr1Length = 10;
       const int arr2Length = 10;
       
       int arr1[arr1Length];
       int arr2[arr2Length];
       
       
       for (int i = 0; i < arr1Length; i++) {
           arr1[i] = rand() % 10 + 1;
       }
       
       for (int i = 0; i < arr2Length; i++) {
           arr2[i] = rand() % 10 + 1;
       }
       
       
       std::cout << "arr1: ";
       for (int i = 0; i < arr1Length; i++) {
           std::cout << arr1[i] << " ";
       }
       std::cout << std::endl;
       
       std::cout << "arr2: ";
       for (int i = 0; i < arr2Length; i++) {
           std::cout << arr2[i] << " ";
       }
       std::cout << std::endl;
       
      
       nullifyArray(arr1, arr1Length, arr2, arr2Length);
       
       
       std::cout << "Updated arr2: ";
       for (int i = 0; i < arr2Length; i++) {
           std::cout << arr2[i] << " ";
       }
       std::cout << std::endl;
       



    
    return 0;
}
 
