#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(280, 600, "ones");
	double ***B = create_three_dim_double(580, 900, 850, "ones");
	double *C = create_one_dim_double(870, "ones");

	for (int b = 5; b < 898; b++)
	  for (int a = 5; a < 577; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-5][a]-0.146/C[a];
	    
	     B[a][b][a]=B[a-4][b-2][a-4]*0.705;
	    
	     B[a][b][a]=B[a-5][b-2][a-5]/A[a][b];
	    
	     B[a][b][a]=B[a+1][b+2][a+3]-C[a]*A[a][b];
	    
	     C[a]=B[a][b][a];
	     C[a+5]=0.624;
	    
	     B[a][b][a]=C[a]*0.019;
	     A[a][b]=C[a-1]+B[a][b][a];
	  }

    return 0;
}