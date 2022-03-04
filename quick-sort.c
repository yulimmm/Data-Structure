// quick-sort.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#define  COUNT  10

int array_data[COUNT] = {14, 5, 43, 27, 18, 31, 37, 88, 6, 35};
void quick_sort(int start, int last); 
void write_head_1();
void write_head_2();
void write_1();


int _tmain(int argc, _TCHAR* argv[])
{
	write_head_1();
	write_1();
	quick_sort(0, 9);
	write_head_2();
	write_1();
	return 0;
}

void quick_sort(int start, int last)
{
 int i, j, data, imsi;
 if (start < last) {
    i = start;
    j = last;
    data = array_data[start];
    do {
	while (array_data[i] <= data) 
                      i = i + 1;
	while (array_data[j] >  data) 
                      j = j - 1;
	if (i < j) {
	    imsi = array_data[i];
	     array_data[i] = array_data[j];
	     array_data[j] = imsi;
	}
    } while (i < j);

    imsi = array_data[start];
    array_data[start] = array_data[j];
    array_data[j] = imsi;

    quick_sort(start, j-1);
    quick_sort(j+1, last);
 }
}

void write_head_1()
{
 printf("\n------------------------- ");
 printf("\nSource data  printing ... ");
 printf("\n------------------------- \n");
}

void write_head_2()
{
 printf("\n------------------------- ");
 printf("\nQuick   sort   result ...   ");
 printf("\n------------------------- \n");
}

void write_1()
{
 int i;
 for (i = 0; i < COUNT; i++)
     printf("%3d ", array_data[i]);
 printf("\n\n");
}

