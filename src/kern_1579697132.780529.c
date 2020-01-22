#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(110, 780, "random");
	int ***A = create_three_dim_int(130, 990, 190, "random");
	int *D = create_one_dim_int(700, "random");
	int ***B = create_three_dim_int(830, 40, 420, "random");

	for (int c = 0; c < 418; c++)
	  for (int b = 0; b < 36; b++)
	    for (int a = 0; a < 110; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b][c+2]+D[a]*A[a][b][c]/C[a][b];
	      
	      C[a][b]=C[a][b]+B[a][b][c]-D[a]*A[a][b][c];
	      
	      B[a][b][c]=B[a][b][c]*C[a][b]-A[a][b][c];
	      A[a][b][c]=B[a+3][b+4][c+1]*A[a][b][c]+C[a][b]-D[a];
	    }

    return 0;
}