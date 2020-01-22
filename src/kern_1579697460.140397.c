#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(10, "zeros");
	double ***C = create_three_dim_double(510, 660, 170, "zeros");
	double **A = create_two_dim_double(860, 700, "zeros");
	double ***E = create_three_dim_double(300, 820, 440, "zeros");
	double **B = create_two_dim_double(260, 930, "zeros");

	for (int b = 5; b < 660; b++)
	  for (int a = 2; a < 9; a++)
	  {
	    
	     D[a]=C[a][b][a]/A[a][b]*B[a][b];
	     B[a][b]=D[a]-E[a][b][a]/A[a][b]*E[a][b][a]+C[a][b][a];
	    
	     C[a][b][a]=C[a-1][b-5][a-1]*0.563;
	    
	     E[a][b][a]=E[a+2][b+3][a+5]*0.91;
	    
	     E[a][b][a]=D[a];
	    
	     B[a][b]=E[a][b][a]/C[a][b][a]*A[a][b];
	    
	     double var_a=D[a]/0.614;
	     double var_b=D[a+1]*0.242;
	    
	     A[a][b]=C[a][b][a]/A[a][b]*B[a][b];
	     E[a][b][a]=C[a][b-2][a]-A[a][b];
	  }

    return 0;
}