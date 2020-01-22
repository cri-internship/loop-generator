#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(130, 60, 70, "random");
	int ***C = create_three_dim_int(380, 680, 730, "random");
	int **E = create_two_dim_int(740, 820, "random");
	int ***D = create_three_dim_int(850, 660, 760, "random");
	int *A = create_one_dim_int(710, "random");

	for (int c = 0; c < 725; c++)
	  for (int b = 0; b < 675; b++)
	    for (int a = 1; a < 376; a++)
	    {
	      
	      A[a]=A[a-1]+27;
	      
	      C[a][b][c]=C[a+2][b+1][c+5]+B[a][b][c]-A[a]/E[a][b]*D[a][b][c];
	      
	      C[a][b][c]=A[a]*E[a][b]+B[a][b][c]-D[a][b][c];
	    }

    return 0;
}