#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(470, 220, "random");
	double **C = create_two_dim_double(120, 570, "random");
	double **B = create_two_dim_double(800, 690, "random");
	double *D = create_one_dim_double(790, "random");

	for (int d = 3; d < 216; d++)
	  for (int c = 5; c < 119; c++)
	    for (int b = 5; b < 119; b++)
	      for (int a = 5; a < 119; a++)
	      {
	        
	       C[a][b]=C[a-5][b]+B[a][b]*D[a]-A[a][b];
	        
	       B[a][b]=B[a-1][b-3]+C[a][b]-A[a][b]*C[a][b];
	        
	       C[a][b]=0.884;
	        
	       D[a]=C[a][b]-A[a][b]+B[a][b];
	       D[a+2]=B[a][b]*C[a][b]-A[a][b];
	        
	       A[a][b]=B[a][b];
	       A[a][b+4]=D[a];
	        
	       double var_b=C[a][b]+0.628;
	       double var_c=C[a+1][b+1]/0.061;
	        
	       double var_d=A[a][b]+0.473;
	       double var_e=A[a+4][b+4]+0.64;
	      }

    return 0;
}