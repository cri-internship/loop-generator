#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(90, 580, "ones");
	int ***D = create_three_dim_int(370, 580, 370, "ones");
	int *B = create_one_dim_int(490, "ones");
	int *C = create_one_dim_int(520, "ones");

	for (int c = 4; c < 370; c++)
	  for (int b = 3; b < 580; b++)
	    for (int a = 5; a < 90; a++)
	    {
	      
	      B[a]=B[a-5]-C[a]/D[a][b][c]*A[a][b];
	      
	      B[a]=18;
	      
	      D[a][b][c]=43;
	      D[a-5][b-3][c-4]=40;
	      
	      C[a]=A[a][b]-B[a];
	      B[a]=A[a-4][b-1]-D[a][b][c]/B[a]*C[a];
	    }

    return 0;
}