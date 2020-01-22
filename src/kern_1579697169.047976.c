#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(610, 770, 370, "ones");
	double ***B = create_three_dim_double(230, 370, 330, "ones");
	double *C = create_one_dim_double(820, "ones");
	double **D = create_two_dim_double(30, 10, "ones");

	for (int d = 1; d < 10; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 4; b < 30; b++)
	      for (int a = 4; a < 30; a++)
	      {
	        
	       D[a][b]=D[a][b]-C[a];
	       C[a]=D[a-4][b-1]-B[a][b][c]*A[a][b][c];
	      }

    return 0;
}