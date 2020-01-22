#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(70, 770, "ones");
	double ***B = create_three_dim_double(790, 170, 940, "ones");
	double **C = create_two_dim_double(880, 270, "ones");
	double *A = create_one_dim_double(170, "ones");

	for (int d = 5; d < 270; d++)
	  for (int c = 3; c < 70; c++)
	    for (int b = 3; b < 70; b++)
	      for (int a = 3; a < 70; a++)
	      {
	        
	       C[a][b]=C[a][b-3]+0.428;
	        
	       A[a]=C[a][b]/A[a];
	       D[a][b]=C[a-3][b-5]*B[a][b][c]+D[a][b]-D[a][b];
	        
	       double var_a=D[a][b]+0.334;
	       double var_b=D[a][b-1]-0.001;
	      }

    return 0;
}