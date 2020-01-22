#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(990, "ones");
	float ***C = create_three_dim_float(100, 810, 140, "ones");
	float **A = create_two_dim_float(190, 890, "ones");

	for (int b = 5; b < 886; b++)
	  for (int a = 5; a < 186; a++)
	  {
	    
	     A[a][b]=A[a-5][b-5]/0.624;
	    
	     A[a][b]=A[a-5][b]+B[a]/C[a][b][a];
	    
	     B[a]=B[a+5]+0.412/C[a][b][a];
	    
	     A[a][b]=A[a][b+4]/B[a]-C[a][b][a];
	    
	     A[a][b]=A[a][b]*B[a]/C[a][b][a];
	  }

    return 0;
}