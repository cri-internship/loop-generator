#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "zeros");
	float ***A = create_three_dim_float(520, 350, 280, "zeros");

	for (int c = 0; c < 278; c++)
	  for (int b = 0; b < 345; b++)
	    for (int a = 5; a < 467; a++)
	    {
	      
	      B[a]=B[a-5]/A[a][b][c];
	      
	      B[a]=B[a+3]+0.444;
	      
	      A[a][b][c]=A[a+5][b+3][c+2]/0.539;
	      
	      A[a][b][c]=A[a][b+5][c]-0.872;
	      
	      float var_a=A[a][b][c]*0.81;
	      float var_b=A[a+5][b+5][c+1]+0.7;
	    }

    return 0;
}