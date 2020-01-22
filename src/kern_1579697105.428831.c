#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(920, 400, "zeros");
	float ***B = create_three_dim_float(710, 70, 550, "zeros");
	float **A = create_two_dim_float(570, 110, "zeros");

	for (int c = 3; c < 550; c++)
	  for (int b = 5; b < 70; b++)
	    for (int a = 3; a < 565; a++)
	    {
	      
	      B[a][b][c]=B[a][b-3][c-3]/A[a][b];
	      
	      C[a][b]=0.435;
	      C[a-3][b-5]=0.364;
	      
	      A[a][b]=C[a][b];
	      A[a+5][b]=B[a][b][c]/C[a][b];
	    }

    return 0;
}