// #include <iostream>

// void mergeSort(int list[])
// {
//     mergeSort(list, 0, size)
// }

// void mergeSort(int[] list, int start, int end)
// {

//     if (star < end)
//     {
//         int center = (start + end) / 2;
//         mergeSort(list, start, center);
//         mergeSort(lsit, center + 1, end);
//         merge(list, start, center, center + 1, end);
//     }
// }

// void merge(list, leftStart, leftEnd, rightStart, rightEnd)
// {
//     int size = rightEnd - leftStart + 1;
//     int temp[size];
//     int ip = 0;
//     int tempPointer = 0;

//     while (leftStart <= leftEnd && rightStart <= rightEnd)
//     {
//         if (list[leftStart] < list[rightStart])
//             temp[ip] = list[leftStart];
//         leftStart++;
//         else
//         {
//             temp[ip] = list[rightStart];
//             rightStart++;
//         }
//         ip++;
//     }
//     //iterate if there are elements in the left array
//     while (leftStart <= leftEnd)
//     {
//         temp[ip] = list[leftStart];
//         leftStart++;
//         ip++;
//     }

//     //iterate if there are elements in the right array
//     while (rightStart <= rightEnd)
//     {
//         temp[ip] = list[rightStart];
//         rightStart++;
//         ip++;
//     }

//     //copy from temp to original list
//     for(int i =0; i<size; i++){
//         list[tempPointer] = temp[i];
//         tempPointer++;
//     }
// }

// int main()
// {

//     auto lang : const char * = "C++";
//     std;
// }