#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(940, "ones");
	double ***C = create_three_dim_double(270, 340, 390, "ones");
	double ***A = create_three_dim_double(830, 640, 360, "ones");

	for (int b = 4; b < 340; b++)
	  for (int a = 5; a < 270; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-4][a]+B[a]*C[a][b][a];
	    
	     B[a]=A[a][b][a];
	     B[a+4]=C[a][b][a]/A[a][b][a];
	    
	     B[a]=B[a]/C[a][b][a]-A[a][b][a];
	     C[a][b][a]=B[a+5]-0.428;
	    
	     double var_a=B[a]*0.042;
	     double var_b=B[a-3]/0.644;
	    
	     A[a][b][a]=B[a]+A[a][b][a]/C[a][b][a];
	     B[a]=B[a+2]*C[a][b][a]/A[a][b][a];
	    
	     B[a]=C[a][b][a]-A[a][b][a]/B[a];
	     B[a]=C[a-5][b][a-3]*B[a];
	  }

    return 0;
}