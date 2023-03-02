// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
double result = 1;
while (n >= 1) {
result = result * value;
n--;
}
return result;
}

uint64_t fact(uint16_t n) {
uint64_t result = 1;
for (uint16_t i = n; i >= 1; --i) {
result *=i;
}
return result;
}

double calcItem(double x, uint16_t n) {
double result = pown(x,n)/fact(n);
return result;
}

double expn(double x, uint16_t count) {
double result = 1;
for (uint16_t i = 1; i <= count; i++){
result += calcItem(x,i); 
}
return result;
}

double sinn(double x, uint16_t count) {
double result = 0;
for (uint16_t i = 1; i <= count; i++) {
result += pown(-1,(i-1))*calcItem(x,(2*i-1));
}
return result;
}

double cosn(double x, uint16_t count) {
double result = 0;
for (uint16_t i = 1; i <= count; i++) {
result += pown(-1,(i-1))*calcItem(x,(2*i-2));
}
return result;
}
