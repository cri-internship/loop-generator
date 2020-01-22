#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(620, 940, 950, "random");
	double **A = create_two_dim_double(990, 410, "random");

	for (int d = 0; d < 946; d++)
	  for (int c = 2; c < 410; c++)
	    for (int b = 5; b < 616; b++)
	      for (int a = 5; a < 616; a++)
	      {
	        
	       A[a][b]=A[a+5][b]+0.446;
	        
	       B[a][b][c]=B[a+4][b+3][c+1]*A[a][b];
	        
	       B[a][b][c]=B[a+1][b+4][c+4]-A[a][b];
	        
	       A[a][b]=B[a][b][c]+0.018;
	       B[a][b][c]=B[a+3][b+5][c+1]+A[a][b];
	        
	       double var_a=B[a][b][c]-0.426;
	       double var_b=B[a+3][b+5][c+3]/0.99;
	        
	       double var_c=A[a][b]+0.416;
	       double var_d=A[a-5][b-2]-0.21;
	      }

    return 0;
}