#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(170, 750, 240, "ones");
	float *D = create_one_dim_float(190, "ones");
	float **A = create_two_dim_float(500, 660, "ones");
	float **C = create_two_dim_float(130, 180, "ones");
	float ***E = create_three_dim_float(360, 40, 190, "ones");

	for (int b = 0; b < 177; b++)
	  for (int a = 0; a < 127; a++)
	  {
	    
	     A[a][b]=A[a+5][b+4]/E[a][b][a];
	    
	     A[a][b]=A[a+5][b+3]+0.482;
	    
	     B[a][b][a]=B[a+1][b][a+1]-C[a][b]*D[a]+A[a][b]/0.31;
	    
	     B[a][b][a]=0.339;
	    
	     C[a][b]=0.198;
	     C[a+3][b+3]=0.108;
	  }

    return 0;
}