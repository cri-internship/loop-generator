#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(130, 650, 230, "ones");
	double ***D = create_three_dim_double(670, 110, 620, "ones");
	double *B = create_one_dim_double(60, "ones");
	double ***C = create_three_dim_double(910, 890, 850, "ones");

	for (int d = 3; d < 618; d++)
	  for (int c = 4; c < 106; c++)
	    for (int b = 3; b < 665; b++)
	      for (int a = 3; a < 665; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-4][c-3]-C[a][b][c];
	        
	       D[a][b][c]=D[a+4][b+3][c+2]-B[a]+A[a][b][c]*0.391;
	        
	       D[a][b][c]=D[a+5][b+4][c+2]-0.988;
	        
	       D[a][b][c]=D[a+2][b][c+2]*0.063;
	      }

    return 0;
}