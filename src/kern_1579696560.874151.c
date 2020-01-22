#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(840, "random");
	float ***B = create_three_dim_float(700, 130, 510, "random");

	for (int c = 5; c < 505; c++)
	  for (int b = 5; b < 130; b++)
	    for (int a = 3; a < 699; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-5][c-5]-0.829;
	      
	      A[a]=B[a][b][c];
	      A[a-2]=B[a][b][c];
	      
	      B[a][b][c]=0.242;
	      
	      A[a]=B[a][b][c]-A[a];
	      B[a][b][c]=B[a-2][b][c]/A[a];
	    }

    return 0;
}