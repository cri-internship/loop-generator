#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(170, 750, 780, "random");
	double *C = create_one_dim_double(370, "random");
	double *A = create_one_dim_double(820, "random");
	double *B = create_one_dim_double(820, "random");
	double **E = create_two_dim_double(840, 430, "random");

	for (int c = 0; c < 425; c++)
	  for (int b = 4; b < 370; b++)
	    for (int a = 4; a < 370; a++)
	    {
	      
	      B[a]=B[a-4]*0.496;
	      
	      E[a][b]=E[a-3][b]*0.116;
	      
	      C[a]=C[a-2]-0.799;
	      
	      E[a][b]=E[a+5][b+5]/A[a]-B[a]+D[a][b][c];
	      
	      double var_a=E[a][b]/0.235;
	      double var_b=E[a-2][b]+0.379;
	      
	      double var_c=E[a][b]/0.967;
	      double var_d=E[a+5][b+4]+0.08;
	    }

    return 0;
}