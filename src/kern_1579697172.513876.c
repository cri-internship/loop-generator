#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(180, 620, "random");
	int *D = create_one_dim_int(790, "random");
	int **E = create_two_dim_int(600, 260, "random");
	int **C = create_two_dim_int(960, 370, "random");
	int *A = create_one_dim_int(660, "random");

	for (int c = 4; c < 260; c++)
	  for (int b = 2; b < 178; b++)
	    for (int a = 2; a < 178; a++)
	    {
	      
	      E[a][b]=E[a-2][b]-B[a][b]*29;
	      
	      E[a][b]=E[a-2][b-4]*31;
	      
	      B[a][b]=B[a+2][b+1]-C[a][b]/E[a][b];
	      
	      int var_a=A[a]+21;
	      A[a]=42;
	      
	      C[a][b]=A[a]/15+A[a]-E[a][b];
	      C[a][b-4]=D[a]/B[a][b]*A[a]-E[a][b];
	      
	      C[a][b]=44;
	    }

    return 0;
}