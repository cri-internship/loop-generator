#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(880, "random");
	double ***A = create_three_dim_double(460, 430, 420, "random");
	double ***D = create_three_dim_double(910, 430, 940, "random");
	double ***C = create_three_dim_double(340, 160, 180, "random");
	double ***E = create_three_dim_double(500, 550, 620, "random");

	for (int b = 5; b < 157; b++)
	  for (int a = 2; a < 338; a++)
	  {
	    
	     E[a][b][a]=E[a-1][b-4][a-2]+0.62;
	    
	     D[a][b][a]=D[a-2][b-5][a]+C[a][b][a]/A[a][b][a]-0.606;
	    
	     E[a][b][a]=E[a+5][b+4][a+5]-0.431;
	    
	     A[a][b][a]=A[a+5][b+2][a+2]+0.957;
	    
	     C[a][b][a]=C[a+1][b+3][a+2]*B[a]-D[a][b][a]+A[a][b][a];
	    
	     E[a][b][a]=E[a+5][b+3][a+2]*0.696;
	    
	     double var_a=B[a]/0.257;
	     double var_b=B[a+1]*0.907;
	  }

    return 0;
}