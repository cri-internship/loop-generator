#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(70, "zeros");
	int *A = create_one_dim_int(270, "zeros");
	int *B = create_one_dim_int(680, "zeros");
	int ***C = create_three_dim_int(210, 90, 300, "zeros");

	for (int c = 2; c < 66; c++)
	  for (int b = 2; b < 66; b++)
	    for (int a = 2; a < 66; a++)
	    {
	      
	      A[a]=A[a-2]-42;
	      
	      D[a]=C[a][b][c]+B[a];
	      D[a+4]=A[a]+A[a]/B[a];
	      
	      A[a]=B[a]-A[a]/D[a];
	      B[a]=B[a+2]/19;
	    }

    return 0;
}