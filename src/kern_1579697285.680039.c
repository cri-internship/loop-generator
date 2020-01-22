#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(70, "random");
	int ***B = create_three_dim_int(90, 720, 310, "random");

	for (int c = 3; c < 305; c++)
	  for (int b = 5; b < 718; b++)
	    for (int a = 5; a < 85; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-2][c-2]/A[a];
	      
	      B[a][b][c]=B[a-4][b-5][c-3]+A[a];
	      
	      B[a][b][c]=B[a+5][b+2][c+5]*A[a];
	      
	      A[a]=B[a][b][c]/A[a];
	      B[a][b][c]=B[a-5][b-2][c-3]+A[a];
	    }

    return 0;
}