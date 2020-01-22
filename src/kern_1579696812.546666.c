#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(580, "ones");
	double *B = create_one_dim_double(840, "ones");
	double ***C = create_three_dim_double(830, 30, 680, "ones");

	for (int d = 0; d < 676; d++)
	  for (int c = 0; c < 30; c++)
	    for (int b = 4; b < 580; b++)
	      for (int a = 4; a < 580; a++)
	      {
	        
	       A[a]=A[a-4]/0.752;
	        
	       A[a]=A[a-3]+0.365;
	        
	       B[a]=B[a-4]+0.035;
	        
	       C[a][b][c]=C[a+2][b][c+4]+B[a];
	        
	       B[a]=0.285;
	      }

    return 0;
}