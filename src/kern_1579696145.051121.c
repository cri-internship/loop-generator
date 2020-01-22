#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(940, 380, 480, "ones");
	float *C = create_one_dim_float(650, "ones");
	float **A = create_two_dim_float(980, 340, "ones");

	for (int d = 5; d < 475; d++)
	  for (int c = 3; c < 337; c++)
	    for (int b = 4; b < 650; b++)
	      for (int a = 4; a < 650; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-3][c-5]-0.327;
	        
	       C[a]=A[a][b]-0.132;
	       B[a][b][c]=C[a]-A[a][b];
	        
	       B[a][b][c]=B[a+2][b+5][c+4]*0.259;
	        
	       A[a][b]=A[a+1][b+3]/B[a][b][c]-0.597;
	        
	       A[a][b]=B[a][b][c]-A[a][b]+C[a];
	       C[a]=B[a][b+2][c+5]+A[a][b]*C[a];
	      }

    return 0;
}