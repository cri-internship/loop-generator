#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(850, "ones");
	int *C = create_one_dim_int(600, "ones");
	int ***D = create_three_dim_int(220, 990, 90, "ones");
	int *A = create_one_dim_int(990, "ones");

	for (int c = 5; c < 90; c++)
	  for (int b = 4; b < 990; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b][c-5]*B[a];
	      
	      A[a]=C[a];
	      A[a]=D[a][b][c];
	      
	      B[a]=46;
	      B[a+2]=32;
	      
	      D[a][b][c]=13;
	      
	      C[a]=A[a]*D[a][b][c];
	      C[a+4]=A[a]+15;
	      
	      C[a]=B[a]-A[a];
	      A[a]=B[a+3]+A[a]/D[a][b][c]-C[a];
	    }

    return 0;
}