#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(680, 70, "zeros");
	double ***A = create_three_dim_double(340, 750, 100, "zeros");
	double **C = create_two_dim_double(430, 990, "zeros");

	for (int b = 5; b < 748; b++)
	  for (int a = 5; a < 337; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+2][a+2]+B[a][b]/C[a][b];
	    
	     C[a][b]=C[a][b+4]*A[a][b][a];
	    
	     A[a][b][a]=0.041;
	    
	     C[a][b]=A[a][b][a]-B[a][b];
	    
	     double var_a=C[a][b]/0.419;
	     double var_b=C[a-5][b-5]/0.796;
	    
	     double var_c=A[a][b][a]*0.754;
	     double var_d=A[a-4][b-1][a-2]*0.599;
	    
	     double var_e=C[a][b]*0.246;
	     double var_f=C[a-3][b-1]/0.158;
	  }

    return 0;
}