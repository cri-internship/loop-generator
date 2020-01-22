#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(1000, "zeros");
	double **B = create_two_dim_double(220, 140, "zeros");
	double ***C = create_three_dim_double(200, 730, 140, "zeros");
	double *E = create_one_dim_double(20, "zeros");
	double **A = create_two_dim_double(30, 530, "zeros");

	for (int d = 0; d < 139; d++)
	  for (int c = 0; c < 216; c++)
	    for (int b = 0; b < 216; b++)
	      for (int a = 0; a < 216; a++)
	      {
	        
	       D[a]=D[a+1]/B[a][b];
	        
	       B[a][b]=E[a]+0.662-C[a][b][c];
	       B[a+4][b+1]=D[a]/E[a]*C[a][b][c]-D[a];
	      }

    return 0;
}