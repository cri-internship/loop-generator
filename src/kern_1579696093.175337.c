#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(60, 630, "zeros");
	double **A = create_two_dim_double(460, 760, "zeros");
	double **B = create_two_dim_double(730, 590, "zeros");

	for (int b = 0; b < 590; b++)
	  for (int a = 3; a < 56; a++)
	  {
	    
	     B[a][b]=B[a-3][b]*0.657;
	    
	     A[a][b]=A[a+1][b+1]+C[a][b]*B[a][b];
	    
	     A[a][b]=C[a][b];
	    
	     B[a][b]=0.965;
	    
	     double var_a=B[a][b]/0.686;
	     double var_b=B[a-1][b]/0.768;
	    
	     double var_c=A[a][b]-0.038;
	     double var_d=A[a+4][b+5]+0.603;
	    
	     double var_e=C[a][b]+0.737;
	     double var_f=C[a+4][b+2]+0.945;
	  }

    return 0;
}