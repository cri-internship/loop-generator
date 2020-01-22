#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(20, 360, 190, "random");
	int **A = create_two_dim_int(260, 190, "random");
	int *B = create_one_dim_int(700, "random");
	int **D = create_two_dim_int(390, 670, "random");

	for (int c = 5; c < 187; c++)
	  for (int b = 5; b < 355; b++)
	    for (int a = 1; a < 16; a++)
	    {
	      
	      C[a][b][c]=C[a][b-3][c]*A[a][b]-B[a]+D[a][b];
	      
	      B[a]=B[a-1]/48;
	      
	      D[a][b]=D[a+1][b+1]-C[a][b][c];
	      
	      B[a]=43;
	      
	      C[a][b][c]=34-B[a]+A[a][b];
	      
	      int var_a=C[a][b][c]+14;
	      int var_b=C[a][b-5][c-5]/39;
	    }

    return 0;
}