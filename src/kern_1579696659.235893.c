#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(650, 770, "ones");
	double *E = create_one_dim_double(830, "ones");
	double **B = create_two_dim_double(680, 400, "ones");
	double ***A = create_three_dim_double(140, 890, 210, "ones");
	double **D = create_two_dim_double(800, 220, "ones");

	for (int c = 5; c < 400; c++)
	  for (int b = 3; b < 649; b++)
	    for (int a = 3; a < 649; a++)
	    {
	      
	      E[a]=E[a+4]*0.179;
	      
	      A[a][b][c]=C[a][b]+D[a][b]*B[a][b]-E[a]/A[a][b][c];
	      B[a][b]=C[a-2][b-5]*B[a][b]+E[a]/A[a][b][c]-0.294;
	      
	      E[a]=C[a][b]*E[a]/D[a][b]-0.103;
	      D[a][b]=C[a+1][b+5]*B[a][b]/A[a][b][c];
	      
	      double var_a=B[a][b]+0.792;
	      double var_b=B[a-3][b]/0.173;
	    }

    return 0;
}