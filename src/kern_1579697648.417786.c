#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(570, 100, "zeros");
	float **A = create_two_dim_float(100, 530, "zeros");

	for (int d = 4; d < 97; d++)
	  for (int c = 2; c < 99; c++)
	    for (int b = 2; b < 99; b++)
	      for (int a = 2; a < 99; a++)
	      {
	        
	       B[a][b]=B[a-1][b-3]+0.818;
	        
	       B[a][b]=B[a+3][b+2]-0.123;
	        
	       B[a][b]=B[a+3][b+3]+0.293;
	        
	       A[a][b]=0.824;
	       A[a+1][b+2]=0.796;
	        
	       A[a][b]=B[a][b]*0.097;
	       B[a][b]=B[a+1][b+2]-0.629;
	        
	       B[a][b]=A[a][b]+B[a][b];
	       A[a][b]=A[a][b+3]*B[a][b];
	        
	       B[a][b]=B[a][b]/A[a][b];
	       A[a][b]=B[a-2][b-4]+A[a][b];
	      }

    return 0;
}