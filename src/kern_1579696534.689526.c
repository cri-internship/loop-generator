#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(330, 710, "random");
	double *A = create_one_dim_double(510, "random");
	double ***B = create_three_dim_double(760, 350, 700, "random");

	for (int b = 5; b < 350; b++)
	  for (int a = 5; a < 325; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-2]/0.376;
	    
	     B[a][b][a]=B[a][b-2][a-4]-0.614;
	    
	     C[a][b]=C[a+5][b+3]/0.71;
	    
	     C[a][b]=0.236;
	    
	     C[a][b]=A[a]*C[a][b]/C[a][b];
	     B[a][b][a]=A[a-1]-C[a][b]*B[a][b][a];
	  }

    return 0;
}