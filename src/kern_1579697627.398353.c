#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(20, 580, "zeros");
	double *B = create_one_dim_double(40, "zeros");
	double ***A = create_three_dim_double(720, 20, 950, "zeros");

	for (int b = 0; b < 16; b++)
	  for (int a = 4; a < 15; a++)
	  {
	    
	     C[a][b]=C[a+5][b+2]/0.078;
	    
	     A[a][b][a]=B[a];
	     A[a+3][b+4][a+4]=C[a][b]/C[a][b];
	    
	     C[a][b]=B[a]+A[a][b][a];
	     B[a]=B[a-4]-C[a][b];
	    
	     double var_a=A[a][b][a]/0.271;
	     double var_b=A[a+2][b+3][a]-0.575;
	  }

    return 0;
}