#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(180, 510, 460, "random");
	int *C = create_one_dim_int(530, "random");
	int **B = create_two_dim_int(720, 210, "random");
	int *A = create_one_dim_int(480, "random");

	for (int c = 0; c < 460; c++)
	  for (int b = 1; b < 205; b++)
	    for (int a = 4; a < 179; a++)
	    {
	      
	      A[a]=D[a][b][c]-C[a];
	      A[a+2]=B[a][b]+D[a][b][c];
	      
	      D[a][b][c]=A[a]-C[a];
	      C[a]=A[a-4]/D[a][b][c]+C[a]-B[a][b];
	      
	      B[a][b]=D[a][b][c]*A[a]/41;
	      A[a]=D[a+1][b][c]-A[a];
	      
	      C[a]=B[a][b]*C[a]-A[a];
	      C[a]=B[a+2][b+5]/D[a][b][c];
	      
	      int var_a=B[a][b]*25;
	      int var_b=B[a][b-1]/11;
	    }

    return 0;
}