#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(870, 400, "random");
	int ***B = create_three_dim_int(300, 340, 500, "random");
	int **C = create_two_dim_int(120, 300, "random");
	int *A = create_one_dim_int(630, "random");
	int *E = create_one_dim_int(700, "random");

	for (int c = 0; c < 498; c++)
	  for (int b = 4; b < 300; b++)
	    for (int a = 5; a < 120; a++)
	    {
	      
	      A[a]=A[a-5]*43;
	      
	      C[a][b]=C[a-3][b-4]+E[a]-D[a][b];
	      
	      A[a]=A[a+1]-B[a][b][c]*C[a][b]/D[a][b]+B[a][b][c];
	      
	      int var_a=B[a][b][c]/44;
	      int var_b=B[a][b+2][c+2]+24;
	      
	      B[a][b][c]=A[a]/B[a][b][c]*C[a][b]-D[a][b]+E[a];
	      D[a][b]=A[a+4]/B[a][b][c]-C[a][b]+D[a][b];
	    }

    return 0;
}