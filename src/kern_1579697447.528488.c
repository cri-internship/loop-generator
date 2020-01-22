#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(180, 330, 180, "random");
	float *B = create_one_dim_float(340, "random");

	for (int d = 0; d < 336; d++)
	  for (int c = 0; c < 336; c++)
	    for (int b = 0; b < 336; b++)
	      for (int a = 0; a < 336; a++)
	      {
	        
	       B[a]=B[a+4]-A[a][b][c];
	        
	       B[a]=B[a]-A[a][b][c];
	       A[a][b][c]=B[a+3]-0.602;
	      }

    return 0;
}