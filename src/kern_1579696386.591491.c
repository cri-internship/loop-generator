#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(310, 890, "ones");
	float ***C = create_three_dim_float(650, 30, 420, "ones");
	float ***B = create_three_dim_float(800, 570, 450, "ones");
	float **D = create_two_dim_float(480, 180, "ones");

	for (int b = 0; b < 26; b++)
	  for (int a = 4; a < 310; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b][a-4]*0.331;
	    
	     A[a][b]=A[a][b+4]+0.594;
	    
	     A[a][b]=A[a][b+1]/0.341;
	    
	     C[a][b][a]=C[a+1][b+4][a+3]/0.646;
	    
	     B[a][b][a]=B[a+4][b+5][a]-D[a][b]*C[a][b][a];
	  }

    return 0;
}