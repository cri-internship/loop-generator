#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(910, 190, "ones");
	double *A = create_one_dim_double(870, "ones");
	double *D = create_one_dim_double(60, "ones");
	double *B = create_one_dim_double(710, "ones");

	for (int b = 3; b < 185; b++)
	  for (int a = 5; a < 708; a++)
	  {
	    
	     B[a]=B[a+2]*D[a];
	    
	     C[a][b]=0.073;
	     C[a+5][b+5]=0.948;
	    
	     A[a]=C[a][b]/B[a]-B[a];
	     A[a+4]=0.583-D[a]/C[a][b];
	    
	     D[a]=B[a]-A[a]/0.187*D[a];
	     A[a]=B[a-4]-C[a][b]/D[a];
	    
	     double var_a=C[a][b]+0.955;
	     double var_b=C[a-5][b-3]/0.57;
	  }

    return 0;
}