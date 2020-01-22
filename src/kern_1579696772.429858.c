#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(540, 810, 750, "ones");
	double ***A = create_three_dim_double(470, 810, 890, "ones");
	double **D = create_two_dim_double(440, 950, "ones");
	double *E = create_one_dim_double(360, "ones");
	double *C = create_one_dim_double(780, "ones");

	for (int b = 4; b < 808; b++)
	  for (int a = 5; a < 440; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-2][a-4]-0.884;
	    
	     D[a][b]=D[a-5][b-4]*C[a]/E[a]-B[a][b][a]+A[a][b][a];
	    
	     B[a][b][a]=0.2;
	     B[a-2][b-2][a-5]=0.165;
	    
	     E[a]=B[a][b][a]*D[a][b]/E[a]-0.772;
	     D[a][b]=B[a+5][b+2][a+1]*D[a][b]-A[a][b][a];
	  }

    return 0;
}