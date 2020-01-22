#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(540, "random");
	int ***C = create_three_dim_int(870, 210, 250, "random");
	int *A = create_one_dim_int(560, "random");
	int **E = create_two_dim_int(50, 990, "random");
	int ***D = create_three_dim_int(570, 430, 340, "random");

	for (int c = 5; c < 250; c++)
	  for (int b = 3; b < 210; b++)
	    for (int a = 5; a < 49; a++)
	    {
	      
	      B[a]=10;
	      float  var_a=B[a]-46;
	      
	      B[a]=B[a-4]/A[a]+D[a][b][c]*C[a][b][c];
	      
	      E[a][b]=E[a+1][b+5]*B[a]+B[a]-A[a];
	      
	      C[a][b][c]=18;
	      C[a-5][b][c]=41;
	      
	      D[a][b][c]=45;
	      D[a-5][b][c-5]=24;
	      
	      D[a][b][c]=D[a][b][c]*E[a][b]-E[a][b]+A[a]/B[a];
	      E[a][b]=D[a-5][b-3][c-5]*C[a][b][c]/E[a][b]+B[a];
	    }

    return 0;
}