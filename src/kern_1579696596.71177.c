#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(740, 430, "ones");
	double **A = create_two_dim_double(670, 460, "ones");

	for (int d = 5; d < 428; d++)
	  for (int c = 4; c < 669; c++)
	    for (int b = 4; b < 669; b++)
	      for (int a = 4; a < 669; a++)
	      {
	        
	       double var_a=B[a][b]+0.159;
	       B[a][b]=0.296;
	        
	       B[a][b]=B[a+5][b+2]/0.364;
	        
	       A[a][b]=A[a+1][b+4]*0.704;
	        
	       A[a][b]=B[a][b]-A[a][b];
	       B[a][b]=B[a-4][b-2]-A[a][b];
	        
	       A[a][b]=A[a][b]/B[a][b];
	       B[a][b]=A[a-1][b-5]*B[a][b];
	      }

    return 0;
}