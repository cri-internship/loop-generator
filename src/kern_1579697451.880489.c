#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(920, 760, 680, "random");
	double **C = create_two_dim_double(870, 110, "random");
	double ***B = create_three_dim_double(730, 910, 720, "random");
	double ***D = create_three_dim_double(370, 450, 230, "random");

	for (int d = 3; d < 107; d++)
	  for (int c = 4; c < 868; c++)
	    for (int b = 4; b < 868; b++)
	      for (int a = 4; a < 868; a++)
	      {
	        
	       C[a][b]=C[a-4][b-3]-0.486;
	        
	       C[a][b]=A[a][b][c]*D[a][b][c]/B[a][b][c];
	      }

    return 0;
}