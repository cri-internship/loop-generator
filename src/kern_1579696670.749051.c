#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(520, 780, "zeros");
	double ***B = create_three_dim_double(580, 660, 30, "zeros");

	for (int b = 5; b < 660; b++)
	  for (int a = 4; a < 519; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-4][a]/A[a][b];
	    
	     B[a][b][a]=B[a][b-2][a-4]-0.162;
	    
	     A[a][b]=0.739;
	     A[a-4][b-2]=B[a][b][a];
	    
	     A[a][b]=B[a][b][a];
	    
	     double var_a=A[a][b]*0.584;
	     double var_b=A[a-3][b-5]/0.827;
	    
	     double var_c=A[a][b]/0.371;
	     double var_d=A[a-1][b-5]/0.844;
	  }

    return 0;
}