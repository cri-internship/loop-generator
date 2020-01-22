#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(790, 800, 850, "ones");
	double ***A = create_three_dim_double(980, 610, 950, "ones");
	double ***D = create_three_dim_double(170, 660, 690, "ones");
	double *C = create_one_dim_double(160, "ones");

	for (int d = 2; d < 690; d++)
	  for (int c = 1; c < 606; c++)
	    for (int b = 2; b < 170; b++)
	      for (int a = 2; a < 170; a++)
	      {
	        
	       A[a][b][c]=A[a][b][c]*D[a][b][c]/0.3+C[a];
	       C[a]=A[a+2][b+4][c]/D[a][b][c]+B[a][b][c];
	        
	       D[a][b][c]=D[a][b][c]*A[a][b][c]/B[a][b][c]+A[a][b][c];
	       B[a][b][c]=D[a-2][b-1][c-2]*A[a][b][c]/B[a][b][c];
	      }

    return 0;
}