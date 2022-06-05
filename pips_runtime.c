#include "pips_runtime.h"

int pips_min_2(int i1, int i2)
{
   int r;
   if (i1<i2)
      r = i1;
   else
      r = i2;
   return r;
}
int pips_max_2(int i1, int i2)
{
   int r;
   if (i1>i2)
      r = i1;
   else
      r = i2;
   return r;
}
int pips_min_3(int i1, int i2, int i3)
{
   int r;
   if (i1<i2)
      r = pips_min_2(i1, i3);
   else
      r = pips_min_2(i2, i3);
   return r;
}
int pips_min_4(int i1, int i2, int i3, int i4)
{
   int r;
   if (i1<i2)
      r = pips_min_3(i1, i3, i4);
   else
      r = pips_min_3(i2, i3, i4);
   return r;
}
int pips_min_5(int i1, int i2, int i3, int i4, int i5)
{
   int r;
   if (i1<i2)
      r = pips_min_4(i1, i3, i4, i5);
   else
      r = pips_min_4(i2, i3, i4, i5);
   return r;
}
int pips_min_6(int i1, int i2, int i3, int i4, int i5, int i6)
{
   int r;
   if (i1<i2)
      r = pips_min_5(i1, i3, i4, i5, i6);
   else
      r = pips_min_5(i2, i3, i4, i5, i6);
   return r;
}
int pips_max_3(int i1, int i2, int i3)
{
   int r;
   if (i1>i2)
      r = pips_max_2(i1, i3);
   else
      r = pips_max_2(i2, i3);
   return r;
}
int pips_max_4(int i1, int i2, int i3, int i4)
{
   int r;
   if (i1>i2)
      r = pips_max_3(i1, i3, i4);
   else
      r = pips_max_3(i2, i3, i4);
   return r;
}
int pips_max_5(int i1, int i2, int i3, int i4, int i5)
{
   int r;
   if (i1>i2)
      r = pips_max_4(i1, i3, i4, i5);
   else
      r = pips_max_4(i2, i3, i4, i5);
   return r;
}
int pips_max_6(int i1, int i2, int i3, int i4, int i5, int i6)
{
   int r;
   if (i1>i2)
      r = pips_max_5(i1, i3, i4, i5, i6);
   else
      r = pips_max_5(i2, i3, i4, i5, i6);
   return r;
}

/*
float pips_min_2(float i1, float i2)
{
   float r;
   if (i1<i2)
      r = i1;
   else
      r = i2;
   return r;
}
float pips_max_2(float i1, float i2)
{
   float r;
   if (i1>i2)
      r = i1;
   else
      r = i2;
   return r;
}
float pips_min_3(float i1, float i2, float i3)
{
   float r;
   if (i1<i2)
      r = pips_min_2(i1, i3);
   else
      r = pips_min_2(i2, i3);
   return r;
}
float pips_min_4(float i1, float i2, float i3, float i4)
{
   float r;
   if (i1<i2)
      r = pips_min_3(i1, i3, i4);
   else
      r = pips_min_3(i2, i3, i4);
   return r;
}
float pips_min_5(float i1, float i2, float i3, float i4, float i5)
{
   float r;
   if (i1<i2)
      r = pips_min_4(i1, i3, i4, i5);
   else
      r = pips_min_4(i2, i3, i4, i5);
   return r;
}
float pips_min_6(float i1, float i2, float i3, float i4, float i5, float i6)
{
   float r;
   if (i1<i2)
      r = pips_min_5(i1, i3, i4, i5, i6);
   else
      r = pips_min_5(i2, i3, i4, i5, i6);
   return r;
}
float pips_max_3(float i1, float i2, float i3)
{
   float r;
   if (i1>i2)
      r = pips_max_2(i1, i3);
   else
      r = pips_max_2(i2, i3);
   return r;
}
float pips_max_4(float i1, float i2, float i3, float i4)
{
   float r;
   if (i1>i2)
      r = pips_max_3(i1, i3, i4);
   else
      r = pips_max_3(i2, i3, i4);
   return r;
}
float pips_max_5(float i1, float i2, float i3, float i4, float i5)
{
   float r;
   if (i1>i2)
      r = pips_max_4(i1, i3, i4, i5);
   else
      r = pips_max_4(i2, i3, i4, i5);
   return r;
}
float pips_max_6(float i1, float i2, float i3, float i4, float i5, float i6)
{
   float r;
   if (i1>i2)
      r = pips_max_5(i1, i3, i4, i5, i6);
   else
      r = pips_max_5(i2, i3, i4, i5, i6);
   return r;
}
*/
