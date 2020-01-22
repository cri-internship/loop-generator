#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(230, 940, "zeros");
	float ***B = create_three_dim_float(10, 190, 670, "zeros");
	float *C = create_one_dim_float(320, "zeros");
	float *D = create_one_dim_float(760, "zeros");

	for (int d = 0; d < 939; d++)
	  for (int c = 5; c < 229; c++)
	    for (int b = 5; b < 229; b++)
	      for (int a = 5; a < 229; a++)
	      {
	        
	       D[a]=A[a][b]-B[a][b][c]/C[a];
	       D[a]=D[a]*C[a]+B[a][b][c]-A[a][b];
	        
	       D[a]=D[a+3]/0.035;
	        
	       A[a][b]=A[a+1][b]/0.527;
	        
	       C[a]=0.617;
	       C[a-1]=0.908;
	        
	       C[a]=D[a]+D[a]-B[a][b][c];
	        
	       A[a][b]=0.98;
	        
	       B[a][b][c]=D[a]*C[a]+B[a][b][c]-A[a][b];
	       C[a]=D[a-5]/A[a][b]*B[a][b][c]-C[a];
	      }

    return 0;
}