#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(100, "random");
	int ***C = create_three_dim_int(40, 150, 80, "random");
	int **B = create_two_dim_int(50, 50, "random");

	for (int c = 0; c < 80; c++)
	  for (int b = 0; b < 48; b++)
	    for (int a = 3; a < 39; a++)
	    {
	      
	      A[a-3]=B[a][b]+C[a][b][c];
	      A[a]=A[a-3]/C[a][b][c]-B[a][b];
	      
	      C[a][b][c]=C[a-1][b][c]*A[a]-A[a];
	      
	      B[a][b]=A[a-3]+B[a][b]-C[a][b][c];
	      A[a-3]=B[a][b]/C[a][b][c];
	      
	      B[a][b]=B[a+1][b+2]/4;
	      
	      B[a-1][b+1]=C[a][b][c]/A[a];
	      B[a-1][b+1]=C[a][b][c]+A[a];
	      
	      A[a]=C[a][b][c]+B[a][b]*11;
	      B[a][b]=C[a+1][b][c]*B[a][b]-A[a];
	      
	      int var_a=A[a+3]+21;
	      int var_b=A[a-1]/27;
	    }

    return 0;
}