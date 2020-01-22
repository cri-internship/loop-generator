#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(880, 700, 610, "random");
	double ***B = create_three_dim_double(710, 890, 100, "random");

	for (int d = 0; d < 96; d++)
	  for (int c = 0; c < 886; c++)
	    for (int b = 0; b < 705; b++)
	      for (int a = 0; a < 705; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+4][c+3]-0.396;
	        
	       B[a][b][c]=0.567;
	        
	       A[a][b][c]=B[a][b][c]-A[a][b][c];
	       B[a][b][c]=B[a+3][b+1][c]/0.462;
	      }

    return 0;
}