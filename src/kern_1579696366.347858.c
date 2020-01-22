#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(270, "ones");
	double **B = create_two_dim_double(260, 380, "ones");
	double ***C = create_three_dim_double(730, 80, 90, "ones");
	double *E = create_one_dim_double(730, "ones");
	double ***A = create_three_dim_double(910, 40, 620, "ones");

	for (int d = 4; d < 90; d++)
	  for (int c = 2; c < 80; c++)
	    for (int b = 2; b < 260; b++)
	      for (int a = 2; a < 260; a++)
	      {
	        
	       E[a]=0.24;
	       float  var_a=E[a]/0.731;
	        
	       C[a][b][c]=0.411;
	       C[a-2][b][c-4]=0.311;
	        
	       E[a]=B[a][b]*0.149+D[a];
	       B[a][b]=B[a][b-2]-E[a]/0.435+A[a][b][c]*D[a];
	      }

    return 0;
}