#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(890, 610, 70, "zeros");
	double **D = create_two_dim_double(470, 980, "zeros");
	double ***A = create_three_dim_double(380, 750, 420, "zeros");
	double ***C = create_three_dim_double(420, 670, 640, "zeros");

	for (int d = 0; d < 65; d++)
	  for (int c = 1; c < 609; c++)
	    for (int b = 3; b < 470; b++)
	      for (int a = 3; a < 470; a++)
	      {
	        
	       D[a][b]=D[a-3][b-1]-B[a][b][c]+C[a][b][c]/A[a][b][c];
	        
	       B[a][b][c]=B[a][b][c+1]+0.6-A[a][b][c];
	        
	       B[a][b][c]=B[a][b+1][c+5]*0.039;
	      }

    return 0;
}