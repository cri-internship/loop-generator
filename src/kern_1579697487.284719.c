#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(740, 100, "ones");
	double ***B = create_three_dim_double(620, 200, 380, "ones");

	for (int d = 1; d < 380; d++)
	  for (int c = 5; c < 98; c++)
	    for (int b = 5; b < 620; b++)
	      for (int a = 5; a < 620; a++)
	      {
	        
	       A[a][b]=A[a-5][b-3]-0.657;
	        
	       B[a][b][c]=A[a][b];
	       B[a-1][b-3][c-1]=A[a][b];
	        
	       B[a][b][c]=A[a][b];
	        
	       double var_a=A[a][b]/0.707;
	       double var_b=A[a+1][b+2]/0.361;
	      }

    return 0;
}