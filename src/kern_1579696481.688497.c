#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(40, 880, "ones");
	double *C = create_one_dim_double(90, "ones");
	double ***B = create_three_dim_double(210, 790, 730, "ones");
	double **E = create_two_dim_double(260, 400, "ones");
	double *D = create_one_dim_double(740, "ones");

	for (int d = 3; d < 730; d++)
	  for (int c = 5; c < 790; c++)
	    for (int b = 5; b < 40; b++)
	      for (int a = 5; a < 40; a++)
	      {
	        
	       D[a]=D[a+4]+E[a][b];
	        
	       D[a]=C[a]/B[a][b][c]+A[a][b];
	        
	       A[a][b]=0.026*E[a][b]-D[a];
	       A[a-3][b-3]=E[a][b]/D[a];
	        
	       C[a]=B[a][b][c]/A[a][b]*D[a]-E[a][b];
	       C[a]=A[a][b]+D[a]/B[a][b][c];
	        
	       double var_a=B[a][b][c]*0.948;
	       double var_b=B[a-5][b-5][c-3]+0.961;
	        
	       double var_c=D[a]*0.379;
	       double var_d=D[a-4]-0.754;
	      }

    return 0;
}