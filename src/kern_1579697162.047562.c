#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(220, "ones");
	float *E = create_one_dim_float(700, "ones");
	float ***A = create_three_dim_float(30, 940, 700, "ones");
	float **B = create_two_dim_float(980, 270, "ones");
	float **D = create_two_dim_float(660, 710, "ones");

	for (int d = 1; d < 700; d++)
	  for (int c = 2; c < 267; c++)
	    for (int b = 4; b < 30; b++)
	      for (int a = 4; a < 30; a++)
	      {
	        
	       D[a][b]=D[a+4][b+4]/0.998*C[a];
	        
	       D[a][b]=D[a+5][b]-A[a][b][c]/B[a][b]+B[a][b]*C[a];
	        
	       B[a][b]=0.223;
	       B[a+2][b+3]=0.694;
	        
	       C[a]=B[a][b]*0.303+E[a]/A[a][b][c];
	       E[a]=B[a+3][b]/C[a]*A[a][b][c]-D[a][b]+E[a];
	        
	       A[a][b][c]=A[a][b][c]+D[a][b];
	       B[a][b]=A[a-4][b-2][c-1]-D[a][b]+B[a][b]/E[a]*C[a];
	        
	       D[a][b]=D[a][b]+C[a]/0.075;
	       A[a][b][c]=D[a][b+5]/B[a][b];
	      }

    return 0;
}