#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(280, "zeros");
	double ***A = create_three_dim_double(440, 600, 70, "zeros");
	double *C = create_one_dim_double(680, "zeros");

	for (int c = 0; c < 65; c++)
	  for (int b = 0; b < 596; b++)
	    for (int a = 0; a < 276; a++)
	    {
	      
	      B[a]=B[a+4]+A[a][b][c];
	      
	      double var_a=A[a][b][c]+0.928;
	      double var_b=A[a+5][b+4][c+5]*0.319;
	      
	      double var_c=A[a][b][c]-0.554;
	      double var_d=A[a+5][b][c+4]-0.67;
	    }

    return 0;
}