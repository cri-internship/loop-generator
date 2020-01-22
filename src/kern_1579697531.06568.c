#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(140, 730, "random");
	double ***B = create_three_dim_double(630, 510, 300, "random");
	double ***C = create_three_dim_double(470, 460, 890, "random");

	for (int d = 5; d < 888; d++)
	  for (int c = 5; c < 459; c++)
	    for (int b = 5; b < 465; b++)
	      for (int a = 5; a < 465; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-5]*A[a][b]/B[a][b][c];
	        
	       C[a][b][c]=C[a+5][b+1][c+2]+A[a][b]-B[a][b][c];
	        
	       B[a][b][c]=C[a][b][c]/0.834*A[a][b];
	       A[a][b]=C[a][b-2][c-4]+B[a][b][c];
	      }

    return 0;
}