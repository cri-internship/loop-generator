#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(630, 160, "ones");
	float *C = create_one_dim_float(920, "ones");
	float **B = create_two_dim_float(460, 1000, "ones");
	float ***E = create_three_dim_float(280, 410, 600, "ones");
	float *D = create_one_dim_float(520, "ones");

	for (int d = 0; d < 155; d++)
	  for (int c = 0; c < 627; c++)
	    for (int b = 0; b < 627; b++)
	      for (int a = 0; a < 627; a++)
	      {
	        
	       A[a][b]=0.626;
	       A[a+3][b+5]=0.911;
	      }

    return 0;
}