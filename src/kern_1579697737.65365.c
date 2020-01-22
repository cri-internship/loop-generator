#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(910, "ones");
	double ***D = create_three_dim_double(610, 910, 240, "ones");
	double ***A = create_three_dim_double(670, 430, 760, "ones");
	double ***C = create_three_dim_double(620, 580, 480, "ones");

	for (int b = 1; b < 576; b++)
	  for (int a = 4; a < 618; a++)
	  {
	    
	     B[a]=B[a-2]/0.197;
	    
	     C[a][b][a]=C[a][b-1][a-4]-0.128;
	    
	     B[a]=B[a+3]*A[a][b][a];
	    
	     C[a][b][a]=0.28;
	    
	     C[a][b][a]=C[a][b][a]-D[a][b][a]+B[a];
	     B[a]=C[a+2][b+4][a]*0.074;
	  }

    return 0;
}