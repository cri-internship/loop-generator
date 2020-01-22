#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(660, 130, 900, "zeros");
	double **A = create_two_dim_double(990, 940, "zeros");
	double ***D = create_three_dim_double(820, 850, 430, "zeros");
	double ***B = create_three_dim_double(190, 940, 780, "zeros");

	for (int b = 2; b < 130; b++)
	  for (int a = 5; a < 660; a++)
	  {
	    
	     C[a][b][a]=0.014;
	     C[a-5][b-2][a-4]=0.653;
	  }

    return 0;
}