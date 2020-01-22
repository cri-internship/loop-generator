#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(970, 440, 450, "random");
	double *D = create_one_dim_double(210, "random");
	double **B = create_two_dim_double(1000, 680, "random");
	double **A = create_two_dim_double(1000, 270, "random");

	for (int b = 5; b < 268; b++)
	  for (int a = 3; a < 210; a++)
	  {
	    
	     A[a][b]=A[a][b-5]+0.75;
	    
	     A[a][b]=A[a-3][b-1]/C[a][b][a];
	    
	     D[a]=0.944;
	     float  var_a=D[a]*0.043;
	    
	     B[a][b]=B[a][b+5]/0.542;
	    
	     B[a][b]=B[a][b+1]*A[a][b]-D[a]+D[a];
	    
	     A[a][b]=D[a]+0.045*B[a][b]-C[a][b][a];
	     D[a]=A[a][b]/0.672;
	  }

    return 0;
}