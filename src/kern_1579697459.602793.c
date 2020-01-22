#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(540, 710, "zeros");
	double **A = create_two_dim_double(610, 530, "zeros");
	double **C = create_two_dim_double(150, 960, "zeros");

	for (int c = 0; c < 530; c++)
	  for (int b = 0; b < 148; b++)
	    for (int a = 0; a < 148; a++)
	    {
	      
	      B[a][b]=C[a][b];
	      B[a][b+4]=0.796;
	      
	      A[a][b]=C[a][b]-B[a][b];
	      C[a][b]=C[a+2][b+3]+B[a][b];
	      
	      double var_a=A[a][b]/0.159;
	      double var_b=A[a+1][b]*0.261;
	    }

    return 0;
}