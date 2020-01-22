#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(480, 340, "ones");
	float **B = create_two_dim_float(100, 810, "ones");
	float **C = create_two_dim_float(510, 160, "ones");
	float **D = create_two_dim_float(310, 550, "ones");

	for (int d = 3; d < 158; d++)
	  for (int c = 5; c < 97; c++)
	    for (int b = 5; b < 97; b++)
	      for (int a = 5; a < 97; a++)
	      {
	        
	       C[a][b]=C[a-2][b-2]*B[a][b]-0.629;
	        
	       C[a][b]=C[a+2][b+1]*0.102;
	        
	       A[a][b]=A[a+5][b+4]*0.358;
	        
	       B[a][b]=B[a+3][b+5]+A[a][b]/C[a][b];
	        
	       D[a][b]=C[a][b]*D[a][b];
	       A[a][b]=C[a-5][b-3]+A[a][b]*D[a][b]-B[a][b];
	        
	       float var_a=A[a][b]+0.876;
	       float var_b=A[a-3][b-3]+0.292;
	      }

    return 0;
}