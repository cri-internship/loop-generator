#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(600, 180, 890, "random");
	double *B = create_one_dim_double(600, "random");
	double *A = create_one_dim_double(480, "random");

	for (int b = 5; b < 177; b++)
	  for (int a = 4; a < 479; a++)
	  {
	    
	     C[a][b][a]=B[a]*A[a]+C[a][b][a];
	     B[a]=C[a][b][a]/A[a];
	    
	     double var_a=A[a]/0.504;
	     A[a]=0.993;
	    
	     A[a]=A[a+1]+B[a]-C[a][b][a];
	    
	     C[a][b][a]=C[a+3][b+3][a+5]+B[a];
	    
	     double var_b=C[a][b][a]*0.718;
	     double var_c=C[a][b-5][a-4]+0.365;
	  }

    return 0;
}