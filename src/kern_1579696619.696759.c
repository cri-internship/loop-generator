#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "random");
	float **D = create_two_dim_float(320, 150, "random");
	float ***A = create_three_dim_float(380, 150, 230, "random");
	float *E = create_one_dim_float(980, "random");
	float *B = create_one_dim_float(220, "random");

	for (int d = 0; d < 230; d++)
	  for (int c = 0; c < 148; c++)
	    for (int b = 0; b < 218; b++)
	      for (int a = 0; a < 218; a++)
	      {
	        
	       B[a]=B[a+2]-0.074;
	        
	       A[a][b][c]=0.124;
	       A[a][b+2][c]=0.669;
	        
	       A[a][b][c]=C[a]+0.393;
	       B[a]=C[a+3]+D[a][b]*A[a][b][c]-E[a];
	      }

    return 0;
}