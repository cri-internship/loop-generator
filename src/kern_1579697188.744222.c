#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(270, 180, 610, "zeros");
	float ***B = create_three_dim_float(720, 180, 860, "zeros");

	for (int c = 3; c < 856; c++)
	  for (int b = 2; b < 179; b++)
	    for (int a = 1; a < 719; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-2][c-3]+A[a][b][c];
	      
	      B[a][b][c]=B[a+1][b+1][c+4]+A[a][b][c];
	    }

    return 0;
}