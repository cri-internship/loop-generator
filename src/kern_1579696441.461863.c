#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(170, 820, 450, "zeros");
	float ***C = create_three_dim_float(820, 500, 810, "zeros");
	float **A = create_two_dim_float(680, 590, "zeros");
	float **E = create_two_dim_float(610, 760, "zeros");
	float **D = create_two_dim_float(90, 350, "zeros");

	for (int b = 4; b < 499; b++)
	  for (int a = 5; a < 675; a++)
	  {
	    
	     C[a][b][a]=C[a][b-2][a-4]/0.036;
	    
	     C[a][b][a]=C[a-3][b-4][a-5]+D[a][b]/B[a][b][a];
	    
	     A[a][b]=A[a-3][b-3]/0.207;
	    
	     A[a][b]=A[a+5][b+2]*E[a][b]+0.561;
	    
	     float var_a=C[a][b][a]*0.658;
	     float var_b=C[a+1][b+1][a+3]+0.976;
	  }

    return 0;
}