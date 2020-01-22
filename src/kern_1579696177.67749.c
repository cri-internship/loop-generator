#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(490, 360, 340, "ones");
	double *D = create_one_dim_double(510, "ones");
	double ***A = create_three_dim_double(530, 800, 540, "ones");
	double *C = create_one_dim_double(750, "ones");
	double *E = create_one_dim_double(440, "ones");

	for (int c = 3; c < 340; c++)
	  for (int b = 4; b < 360; b++)
	    for (int a = 1; a < 438; a++)
	    {
	      
	      B[a][b][c]=B[a][b-4][c-3]+0.583;
	      
	      E[a]=E[a-1]*D[a]/B[a][b][c]+C[a];
	      
	      E[a]=0.434;
	      
	      double var_a=D[a]+0.671;
	      double var_b=D[a]+0.807;
	      
	      D[a]=E[a]+D[a]*B[a][b][c]/C[a];
	      B[a][b][c]=E[a+2]/D[a];
	    }

    return 0;
}