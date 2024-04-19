#pragma once
#include <iostream>;
#include "windows.h";
#include <string>;
using namespace std;

int sum(int a, int b);
long long fact(unsigned int n);
void readln(string& str);
int stringLength(string& str);
bool isSimple(int a);
int arraySum(int a[], int n);
string reversedString(string inputString);
void sortArray(int* a, int n);
struct DynArray { int* array; int count;};
int* addElement(int* a, int n, int e);
bool hasElement(int* a, int n, int e);
DynArray mutualElements(int* a1, int c1, int* a2, int c2);
float rectSquare(float x, float y);
string ageTostring(unsigned int n);
string ageToUkr(int n);