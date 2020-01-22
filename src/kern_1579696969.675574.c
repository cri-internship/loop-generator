#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(610, 620, 210, "random");
	float **C = create_two_dim_float(560, 590, "random");
	float *B = create_one_dim_float(730, "random");

	for (int c = 2; c < 209; c++)
	  for (int b = 2; b < 588; b++)
	    for (int a = 5; a < 559; a++)
	    {
	      
	      B[a]=B[a-4]/0.585;
	      
	      B[a]=B[a+3]-0.859;
	      
	      C[a][b]=C[a+1][b+2]-0.365;
	      
	      A[a][b][c]=0.786;
	      A[a][b+1][c+1]=0.211;
	      
	      C[a][b]=A[a][b][c]*B[a];
	      A[a][b][c]=A[a-5][b-2][c-2]+C[a][b]/0.618;
	    }

    return 0;
}