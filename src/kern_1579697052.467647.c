#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(810, 290, 310, "random");
	double ***B = create_three_dim_double(240, 390, 420, "random");
	double **D = create_two_dim_double(20, 350, "random");
	double **C = create_two_dim_double(120, 280, "random");

	for (int b = 4; b < 280; b++)
	  for (int a = 4; a < 16; a++)
	  {
	    
	     C[a][b]=C[a-4][b-4]+0.453;
	    
	     D[a][b]=D[a+4][b+5]/C[a][b]-A[a][b][a]*B[a][b][a];
	    
	     D[a][b]=A[a][b][a];
	    
	     C[a][b]=D[a][b]/0.725;
	    
	     double var_a=B[a][b][a]*0.434;
	     double var_b=B[a-3][b-2][a-1]/0.261;
	  }

    return 0;
}