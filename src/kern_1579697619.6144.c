#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(800, 360, 340, "random");
	double *A = create_one_dim_double(730, "random");
	double ***B = create_three_dim_double(930, 790, 190, "random");
	double ***D = create_three_dim_double(530, 490, 880, "random");

	for (int b = 4; b < 360; b++)
	  for (int a = 5; a < 529; a++)
	  {
	    
	     B[a][b][a]=0.946;
	     B[a][b+4][a]=0.991;
	    
	     D[a][b][a]=C[a][b][a]-B[a][b][a];
	     D[a+1][b+1][a+1]=B[a][b][a]-0.405;
	    
	     C[a][b][a]=0.196;
	     C[a-5][b-4][a]=D[a][b][a];
	    
	     A[a]=0.58*C[a][b][a];
	     A[a-2]=B[a][b][a]*C[a][b][a];
	    
	     A[a]=B[a][b][a]+D[a][b][a];
	     C[a][b][a]=B[a][b-4][a-2]-C[a][b][a]+D[a][b][a]/A[a];
	  }

    return 0;
}