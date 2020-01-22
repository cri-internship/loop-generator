#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(790, 620, 640, "ones");
	double **A = create_two_dim_double(970, 600, "ones");

	for (int d = 1; d < 640; d++)
	  for (int c = 5; c < 600; c++)
	    for (int b = 5; b < 789; b++)
	      for (int a = 5; a < 789; a++)
	      {
	        
	       A[a][b]=0.554;
	       float  var_a=A[a][b]*0.497;
	        
	       B[a][b][c]=B[a-5][b][c-1]*0.116;
	        
	       B[a][b][c]=B[a+1][b+4][c]+A[a][b];
	        
	       A[a][b]=A[a+5][b]+0.96;
	        
	       double var_b=A[a][b]+0.87;
	       double var_c=A[a-5][b-4]/0.738;
	        
	       double var_d=A[a][b]+0.044;
	       double var_e=A[a-3][b-5]*0.025;
	      }

    return 0;
}