#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(990, 770, "random");
	double ***A = create_three_dim_double(60, 430, 70, "random");

	for (int d = 5; d < 70; d++)
	  for (int c = 2; c < 430; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       A[a][b][c]=A[a][b][c]/B[a][b];
	       B[a][b]=A[a-5][b-2][c-5]*0.767;
	        
	       A[a][b][c]=A[a][b][c]-B[a][b];
	       A[a][b][c]=A[a][b-2][c-2]+0.403;
	      }

    return 0;
}