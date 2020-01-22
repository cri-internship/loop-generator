#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(900, 980, "random");
	double **B = create_two_dim_double(890, 710, "random");
	double *C = create_one_dim_double(50, "random");
	double *A = create_one_dim_double(800, "random");

	for (int b = 5; b < 709; b++)
	  for (int a = 3; a < 886; a++)
	  {
	    
	     B[a][b]=B[a-3][b-5]-0.425+C[a];
	    
	     D[a][b]=D[a+3][b+5]*A[a]+B[a][b]/B[a][b];
	    
	     D[a][b]=A[a]-C[a]*B[a][b];
	    
	     A[a]=B[a][b]*0.218;
	     B[a][b]=B[a+4][b+1]/D[a][b]-A[a]+C[a];
	    
	     double var_a=D[a][b]*0.052;
	     double var_b=D[a+2][b+2]*0.628;
	  }

    return 0;
}