#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(660, 10, "zeros");
	float ***C = create_three_dim_float(910, 580, 10, "zeros");
	float *A = create_one_dim_float(80, "zeros");
	float *B = create_one_dim_float(40, "zeros");

	for (int d = 5; d < 9; d++)
	  for (int c = 5; c < 38; c++)
	    for (int b = 5; b < 38; b++)
	      for (int a = 5; a < 38; a++)
	      {
	        
	       A[a]=0.537;
	       float  var_a=A[a]+0.566;
	        
	       D[a][b]=D[a-5][b-5]+0.686;
	        
	       B[a]=B[a+2]*0.955;
	        
	       B[a]=D[a][b]/A[a]-0.842;
	       C[a][b][c]=D[a+1][b+1]*C[a][b][c]+B[a];
	      }

    return 0;
}