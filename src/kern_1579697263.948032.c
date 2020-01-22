#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(240, 790, "random");
	float *D = create_one_dim_float(870, "random");
	float **A = create_two_dim_float(180, 640, "random");
	float **B = create_two_dim_float(870, 110, "random");
	float ***E = create_three_dim_float(810, 290, 200, "random");

	for (int d = 0; d < 196; d++)
	  for (int c = 0; c < 285; c++)
	    for (int b = 0; b < 177; b++)
	      for (int a = 0; a < 177; a++)
	      {
	        
	       E[a][b][c]=E[a+4][b+5][c+4]*0.13;
	        
	       B[a][b]=A[a][b]*0.453;
	       A[a][b]=A[a+3][b+5]*B[a][b]/E[a][b][c]-D[a];
	      }

    return 0;
}