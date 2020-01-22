#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(40, 70, 480, "ones");
	double **A = create_two_dim_double(640, 100, "ones");
	double ***B = create_three_dim_double(620, 380, 670, "ones");
	double *C = create_one_dim_double(90, "ones");
	double **D = create_two_dim_double(740, 560, "ones");

	for (int b = 5; b < 95; b++)
	  for (int a = 2; a < 638; a++)
	  {
	    
	     A[a][b]=A[a+2][b+5]/C[a];
	    
	     D[a][b]=E[a][b][a]/B[a][b][a];
	     D[a-2][b-5]=A[a][b]*E[a][b][a]-0.263;
	  }

    return 0;
}