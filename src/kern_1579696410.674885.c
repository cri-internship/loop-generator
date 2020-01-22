#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(660, "random");
	double *E = create_one_dim_double(810, "random");
	double *C = create_one_dim_double(540, "random");
	double **B = create_two_dim_double(580, 520, "random");
	double *A = create_one_dim_double(860, "random");

	for (int d = 4; d < 515; d++)
	  for (int c = 5; c < 540; c++)
	    for (int b = 5; b < 540; b++)
	      for (int a = 5; a < 540; a++)
	      {
	        
	       C[a]=C[a-3]+0.366;
	        
	       D[a]=D[a-2]+0.332;
	        
	       D[a]=D[a+4]/0.32;
	        
	       B[a][b]=E[a]*C[a]/D[a]-A[a];
	       B[a-5][b-4]=C[a]/A[a]*E[a];
	        
	       B[a][b]=E[a]/0.564;
	        
	       C[a]=B[a][b]*C[a]/E[a]+D[a];
	       A[a]=B[a-4][b-4]+A[a]/E[a];
	        
	       B[a][b]=D[a]+B[a][b]*C[a]/E[a];
	       E[a]=D[a-1]+E[a]/B[a][b]-A[a];
	      }

    return 0;
}