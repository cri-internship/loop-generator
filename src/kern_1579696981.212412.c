#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(500, 300, "random");
	int ***B = create_three_dim_int(490, 10, 390, "random");

	for (int c = 0; c < 388; c++)
	  for (int b = 4; b < 5; b++)
	    for (int a = 4; a < 488; a++)
	    {
	      
	      A[a][b]=A[a-3][b-3]*27;
	      
	      B[a][b][c]=B[a-4][b-2][c]-49;
	      
	      B[a][b][c]=A[a][b];
	      
	      int var_a=A[a][b]/33;
	      int var_b=A[a-1][b-4]+8;
	      
	      B[a][b][c]=B[a][b][c]*7;
	      A[a][b]=B[a-2][b-3][c]-A[a][b];
	    }

    return 0;
}