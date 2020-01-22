#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(350, "random");
	double **A = create_two_dim_double(830, 970, "random");
	double *B = create_one_dim_double(280, "random");
	double ***C = create_three_dim_double(940, 140, 310, "random");

	for (int b = 2; b < 136; b++)
	  for (int a = 5; a < 275; a++)
	  {
	    
	     B[a]=0.808;
	     B[a+5]=0.874;
	    
	     C[a][b][a]=0.476;
	     C[a-1][b][a-2]=0.037;
	    
	     C[a][b][a]=0.615;
	    
	     C[a][b][a]=C[a][b][a]-B[a]/D[a];
	     A[a][b]=C[a-3][b-2][a-5]-A[a][b];
	  }

    return 0;
}