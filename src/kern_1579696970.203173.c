#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(690, 370, 800, "ones");
	double *D = create_one_dim_double(80, "ones");
	double ***B = create_three_dim_double(870, 600, 400, "ones");
	double ***C = create_three_dim_double(890, 780, 950, "ones");

	for (int d = 0; d < 797; d++)
	  for (int c = 4; c < 365; c++)
	    for (int b = 4; b < 75; b++)
	      for (int a = 4; a < 75; a++)
	      {
	        
	       D[a]=D[a+5]-0.779;
	        
	       A[a][b][c]=0.366;
	       A[a-4][b-4][c]=0.636;
	        
	       C[a][b][c]=0.013;
	       C[a+1][b+5][c+3]=0.408;
	        
	       double var_a=A[a][b][c]+0.587;
	       double var_b=A[a][b+5][c+3]/0.477;
	      }

    return 0;
}