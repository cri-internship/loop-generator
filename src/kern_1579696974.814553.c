#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(500, "ones");
	int *E = create_one_dim_int(380, "ones");
	int **B = create_two_dim_int(890, 30, "ones");
	int **C = create_two_dim_int(500, 820, "ones");
	int *A = create_one_dim_int(610, "ones");

	for (int c = 0; c < 820; c++)
	  for (int b = 5; b < 495; b++)
	    for (int a = 5; a < 495; a++)
	    {
	      
	      C[a][b]=A[a]-E[a];
	      C[a+5][b]=B[a][b]+D[a]-8/D[a];
	      
	      D[a]=C[a][b];
	      D[a+1]=19/B[a][b];
	      
	      A[a]=28;
	      A[a-5]=14;
	      
	      B[a][b]=C[a][b]/D[a];
	    }

    return 0;
}