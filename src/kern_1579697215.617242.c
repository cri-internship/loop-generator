#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(60, 900, "random");
	double ***C = create_three_dim_double(750, 880, 410, "random");
	double **A = create_two_dim_double(460, 790, "random");
	double *D = create_one_dim_double(840, "random");

	for (int b = 5; b < 790; b++)
	  for (int a = 5; a < 460; a++)
	  {
	    
	     A[a][b]=A[a-2][b-3]/C[a][b][a]*D[a]+B[a][b];
	    
	     C[a][b][a]=C[a-1][b-1][a-1]-A[a][b];
	    
	     D[a]=C[a][b][a]*A[a][b]/0.772;
	     D[a-5]=B[a][b]*C[a][b][a];
	    
	     A[a][b]=0.628;
	    
	     C[a][b][a]=A[a][b];
	    
	     double var_a=C[a][b][a]-0.591;
	     double var_b=C[a-5][b-5][a-3]*0.133;
	  }

    return 0;
}