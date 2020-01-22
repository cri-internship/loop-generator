#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(880, 830, "random");
	double **A = create_two_dim_double(380, 230, "random");
	double *D = create_one_dim_double(670, "random");
	double **C = create_two_dim_double(670, 280, "random");

	for (int d = 4; d < 226; d++)
	  for (int c = 5; c < 375; c++)
	    for (int b = 5; b < 375; b++)
	      for (int a = 5; a < 375; a++)
	      {
	        
	       C[a][b]=C[a-3][b-4]+0.707;
	        
	       C[a][b]=C[a-2][b]-0.684;
	        
	       D[a]=D[a-5]-0.988;
	        
	       A[a][b]=A[a][b+2]/D[a]-C[a][b];
	        
	       A[a][b]=A[a+5][b+4]*B[a][b]-D[a]+C[a][b];
	        
	       A[a][b]=B[a][b]*0.646;
	       B[a][b]=B[a][b-3]/A[a][b]*C[a][b];
	      }

    return 0;
}