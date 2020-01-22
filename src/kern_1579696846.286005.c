#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(420, 740, 100, "random");
	int ***D = create_three_dim_int(830, 520, 990, "random");
	int **A = create_two_dim_int(370, 830, "random");
	int **C = create_two_dim_int(30, 1000, "random");

	for (int d = 1; d < 100; d++)
	  for (int c = 5; c < 740; c++)
	    for (int b = 3; b < 420; b++)
	      for (int a = 3; a < 420; a++)
	      {
	        
	       C[a][b]=B[a][b][c]-4;
	       A[a][b]=B[a-3][b-5][c-1]/C[a][b]*A[a][b]+D[a][b][c];
	      }

    return 0;
}