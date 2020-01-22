#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(880, 480, 890, "random");
	double **A = create_two_dim_double(790, 200, "random");

	for (int d = 0; d < 890; d++)
	  for (int c = 5; c < 195; c++)
	    for (int b = 3; b < 789; b++)
	      for (int a = 3; a < 789; a++)
	      {
	        
	       A[a][b]=A[a-3][b]+0.597;
	        
	       A[a][b]=A[a+1][b+5]-0.113;
	        
	       double var_a=B[a][b][c]/0.877;
	       double var_b=B[a+1][b+5][c]+0.585;
	        
	       B[a][b][c]=A[a][b]/B[a][b][c];
	       A[a][b]=A[a-1][b-5]+B[a][b][c];
	      }

    return 0;
}