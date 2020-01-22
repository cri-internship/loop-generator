#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(330, 770, 70, "ones");
	double **B = create_two_dim_double(540, 390, "ones");
	double ***C = create_three_dim_double(350, 350, 260, "ones");

	for (int d = 2; d < 260; d++)
	  for (int c = 5; c < 350; c++)
	    for (int b = 5; b < 350; b++)
	      for (int a = 5; a < 350; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-5][c-2]*0.013;
	        
	       double var_a=B[a][b]+0.361;
	       double var_b=B[a-3][b-2]/0.606;
	      }

    return 0;
}