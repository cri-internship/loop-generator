#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(180, 710, "random");
	double ***D = create_three_dim_double(440, 420, 100, "random");
	double ***A = create_three_dim_double(220, 690, 580, "random");
	double *C = create_one_dim_double(960, "random");

	for (int c = 5; c < 100; c++)
	  for (int b = 4; b < 420; b++)
	    for (int a = 5; a < 216; a++)
	    {
	      
	      C[a]=0.422;
	      float  var_a=C[a]-0.578;
	      
	      A[a][b][c]=D[a][b][c];
	      A[a+4][b+4][c+5]=0.76;
	      
	      A[a][b][c]=0.346;
	      
	      D[a][b][c]=0.901;
	      D[a-1][b-4][c-2]=0.821;
	    }

    return 0;
}