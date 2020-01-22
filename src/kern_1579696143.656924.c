#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(50, "ones");
	float *A = create_one_dim_float(850, "ones");
	float *E = create_one_dim_float(370, "ones");
	float **C = create_two_dim_float(1000, 60, "ones");
	float ***B = create_three_dim_float(40, 30, 360, "ones");

	for (int d = 5; d < 360; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 2; b < 40; b++)
	      for (int a = 2; a < 40; a++)
	      {
	        
	       B[a][b][c]=0.976;
	       B[a-2][b-5][c-5]=0.534;
	      }

    return 0;
}