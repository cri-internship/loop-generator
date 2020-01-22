#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(980, "ones");
	int ***B = create_three_dim_int(800, 960, 910, "ones");
	int *C = create_one_dim_int(240, "ones");
	int *A = create_one_dim_int(480, "ones");

	for (int c = 2; c < 910; c++)
	  for (int b = 3; b < 960; b++)
	    for (int a = 5; a < 478; a++)
	    {
	      
	      D[a]=D[a-3]*A[a]-46;
	      
	      D[a]=D[a+4]/42;
	      
	      A[a]=A[a+2]/D[a]-B[a][b][c];
	      
	      D[a]=D[a+5]-B[a][b][c]*A[a];
	      
	      A[a]=48+B[a][b][c];
	      
	      B[a][b][c]=16;
	      B[a-4][b-3][c-2]=46;
	      
	      C[a]=D[a]*A[a]-C[a]/B[a][b][c];
	    }

    return 0;
}