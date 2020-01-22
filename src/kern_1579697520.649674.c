#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(930, "zeros");
	double *C = create_one_dim_double(470, "zeros");
	double **B = create_two_dim_double(400, 310, "zeros");

	for (int b = 5; b < 470; b++)
	  for (int a = 5; a < 470; a++)
	  {
	    
	     C[a]=B[a][b]*A[a];
	     C[a-5]=B[a][b]-A[a];
	    
	     C[a]=0.384;
	    
	     A[a]=0.417;
	     A[a+1]=0.242;
	    
	     double var_a=A[a]/0.302;
	     double var_b=A[a-4]*0.359;
	    
	     double var_c=A[a]+0.074;
	     double var_d=A[a+5]-0.91;
	  }

    return 0;
}