#ifndef PIPS_RUNTIME_
#define PIPS_RUNTIME_
#define pips_min(n, ...)                    \
  pips_min_ ## n(__VA_ARGS__)
#define pips_max(n, ...)                    \
  pips_max_ ## n(__VA_ARGS__)

#define  pips_div(x,y) ((x<0)?((x-y+1)/y):((x)/y))
#define  MOD(x,y) (x%y)

/*
float pips_min_2(float i1, float i2);
float pips_max_2(float i1, float i2);
float pips_min_3(float i1, float i2, float i3);
float pips_min_4(float i1, float i2, float i3, float i4);
float pips_min_5(float i1, float i2, float i3, float i4, float i5);
float pips_min_6(float i1, float i2, float i3, float i4, float i5, float i6);
float pips_max_3(float i1, float i2, float i3);
float pips_max_4(float i1, float i2, float i3, float i4);
float pips_max_5(float i1, float i2, float i3, float i4, float i5);
float pips_max_6(float i1, float i2, float i3, float i4, float i5, float i6);
*/
int pips_min_2(int i1, int i2);
int pips_max_2(int i1, int i2);
int pips_min_3(int i1, int i2, int i3);
int pips_min_4(int i1, int i2, int i3, int i4);
int pips_min_5(int i1, int i2, int i3, int i4, int i5);
int pips_min_6(int i1, int i2, int i3, int i4, int i5, int i6);
int pips_min_7(int i1, int i2, int i3, int i4, int i5, int i6, int i7);
int pips_min_8(int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8);
int pips_max_3(int i1, int i2, int i3);
int pips_max_4(int i1, int i2, int i3, int i4);
int pips_max_5(int i1, int i2, int i3, int i4, int i5);
int pips_max_6(int i1, int i2, int i3, int i4, int i5, int i6);
int pips_max_7(int i1, int i2, int i3, int i4, int i5, int i6, int i7);
int pips_max_8(int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8);
#endif
