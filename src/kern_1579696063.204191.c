#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(800, 470, "ones");
	double **A = create_two_dim_double(360, 150, "ones");

	for (int d = 5; d < 145; d++)
	  for (int c = 4; c < 355; c++)
	    for (int b = 4; b < 355; b++)
	      for (int a = 4; a < 355; a++)
	      {
	        
	       A[a][b]=A[a][b+2]-0.568;
	        
	       B[a][b]=B[a+2][b]-0.247;
	        
	       B[a][b]=B[a+3][b+5]*A[a][b];
	        
	       A[a][b]=0.109;
	        
	       A[a][b]=A[a][b]-B[a][b];
	       B[a][b]=A[a-2][b-5]-B[a][b];
	        
	       double var_a=A[a][b]-0.596;
	       double var_b=A[a+2][b+5]+0.266;
	      }

    return 0;
}