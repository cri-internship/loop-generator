#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(170, 550, "random");
	double ***B = create_three_dim_double(160, 210, 90, "random");

	for (int b = 5; b < 210; b++)
	  for (int a = 4; a < 160; a++)
	  {
	    
	     A[a][b]=A[a-2][b-1]*B[a][b][a];
	    
	     A[a][b]=A[a-4][b-2]*0.844;
	    
	     B[a][b][a]=B[a-3][b-4][a-1]-0.922;
	    
	     A[a][b]=A[a+4][b]-0.782;
	    
	     A[a][b]=A[a][b]/B[a][b][a];
	     B[a][b][a]=A[a+4][b+2]-B[a][b][a];
	    
	     A[a][b]=A[a][b]*B[a][b][a];
	     A[a][b]=A[a-1][b-2]*B[a][b][a];
	    
	     A[a][b]=A[a][b]/B[a][b][a];
	     A[a][b]=A[a-1][b-5]-B[a][b][a];
	  }

    return 0;
}