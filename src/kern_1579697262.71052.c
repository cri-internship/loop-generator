#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(530, "random");
	float ***A = create_three_dim_float(290, 160, 790, "random");
	float **C = create_two_dim_float(220, 580, "random");

	for (int c = 2; c < 790; c++)
	  for (int b = 5; b < 160; b++)
	    for (int a = 5; a < 216; a++)
	    {
	      
	      B[a]=B[a-4]*0.424;
	      
	      A[a][b][c]=A[a][b-3][c-2]/B[a];
	      
	      A[a][b][c]=A[a-4][b-5][c-1]+0.006;
	      
	      C[a][b]=C[a+4][b+2]-0.622+A[a][b][c];
	      
	      C[a][b]=0.606;
	      
	      B[a]=0.146;
	      
	      A[a][b][c]=C[a][b]*0.349;
	      B[a]=C[a][b-5]+B[a];
	    }

    return 0;
}