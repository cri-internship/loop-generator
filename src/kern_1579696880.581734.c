#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(740, 140, "random");
	double ***B = create_three_dim_double(10, 240, 70, "random");
	double ***C = create_three_dim_double(780, 240, 870, "random");

	for (int d = 0; d < 67; d++)
	  for (int c = 0; c < 139; c++)
	    for (int b = 0; b < 7; b++)
	      for (int a = 0; a < 7; a++)
	      {
	        
	       B[a][b][c]=B[a+3][b+4][c+3]-A[a][b]*C[a][b][c];
	        
	       A[a][b]=A[a][b]/B[a][b][c];
	       B[a][b][c]=A[a+4][b+1]-B[a][b][c];
	      }

    return 0;
}