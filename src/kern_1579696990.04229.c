#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(840, "ones");
	double ***E = create_three_dim_double(160, 880, 590, "ones");
	double *C = create_one_dim_double(350, "ones");
	double *B = create_one_dim_double(380, "ones");
	double ***A = create_three_dim_double(810, 270, 990, "ones");

	for (int b = 3; b < 268; b++)
	  for (int a = 5; a < 156; a++)
	  {
	    
	     D[a]=D[a-4]-A[a][b][a]+C[a]*E[a][b][a];
	    
	     E[a][b][a]=E[a+4][b+4][a+3]*0.449;
	    
	     A[a][b][a]=A[a+1][b+2][a+1]/0.93;
	    
	     C[a]=0.348;
	     C[a-5]=0.216;
	    
	     E[a][b][a]=0.324+D[a];
	    
	     C[a]=0.887;
	  }

    return 0;
}