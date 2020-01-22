#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(600, 340, "random");
	double ***C = create_three_dim_double(510, 60, 680, "random");
	double *B = create_one_dim_double(490, "random");

	for (int b = 4; b < 60; b++)
	  for (int a = 3; a < 489; a++)
	  {
	    
	     A[a][b]=A[a-3][b-4]/C[a][b][a];
	    
	     C[a][b][a]=C[a+3][b][a+1]+0.884-B[a];
	    
	     B[a]=0.368;
	     B[a-3]=0.649;
	    
	     B[a]=C[a][b][a]/A[a][b];
	  }

    return 0;
}