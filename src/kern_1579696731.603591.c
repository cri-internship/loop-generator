#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(620, "random");
	float ***C = create_three_dim_float(290, 830, 20, "random");
	float **B = create_two_dim_float(580, 170, "random");

	for (int d = 5; d < 20; d++)
	  for (int c = 5; c < 168; c++)
	    for (int b = 5; b < 290; b++)
	      for (int a = 5; a < 290; a++)
	      {
	        
	       B[a][b]=B[a][b-5]*C[a][b][c]-A[a];
	        
	       C[a][b][c]=C[a-3][b-3][c-5]+0.413;
	        
	       A[a]=A[a-5]-0.77;
	        
	       B[a][b]=B[a][b-4]*C[a][b][c];
	        
	       A[a]=B[a][b]*C[a][b][c]/A[a];
	       B[a][b]=B[a+4][b+2]*0.942+C[a][b][c];
	      }

    return 0;
}