#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(970, 760, 440, "ones");
	double ***C = create_three_dim_double(200, 410, 340, "ones");
	double ***D = create_three_dim_double(830, 320, 80, "ones");
	double ***B = create_three_dim_double(370, 990, 710, "ones");
	double *E = create_one_dim_double(190, "ones");

	for (int d = 5; d < 340; d++)
	  for (int c = 5; c < 405; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       C[a][b][c]=0.914;
	       C[a-2][b-5][c-5]=0.679;
	        
	       A[a][b][c]=E[a]/0.688;
	       C[a][b][c]=E[a-5]*C[a][b][c]/B[a][b][c];
	        
	       double var_a=C[a][b][c]+0.921;
	       double var_b=C[a+1][b+5][c]/0.249;
	      }

    return 0;
}