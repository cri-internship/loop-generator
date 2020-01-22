#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(250, "random");
	int *D = create_one_dim_int(280, "random");
	int ***E = create_three_dim_int(750, 400, 610, "random");
	int ***C = create_three_dim_int(150, 10, 560, "random");
	int *A = create_one_dim_int(830, "random");

	for (int c = 2; c < 560; c++)
	  for (int b = 0; b < 10; b++)
	    for (int a = 5; a < 150; a++)
	    {
	      
	      D[a]=D[a-5]+E[a][b][c]-C[a][b][c]*B[a];
	      
	      A[a]=A[a-2]+D[a]*D[a]-C[a][b][c]/E[a][b][c];
	      
	      int var_a=C[a][b][c]+27;
	      int var_b=C[a-2][b][c-2]/10;
	    }

    return 0;
}