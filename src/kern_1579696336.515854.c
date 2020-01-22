#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(380, "random");
	int *A = create_one_dim_int(620, "random");
	int **B = create_two_dim_int(70, 580, "random");
	int **D = create_two_dim_int(260, 860, "random");

	for (int c = 1; c < 575; c++)
	  for (int b = 4; b < 69; b++)
	    for (int a = 4; a < 69; a++)
	    {
	      
	      C[a]=C[a+5]*D[a][b];
	      
	      C[a]=C[a+3]*B[a][b]-A[a];
	      
	      A[a]=C[a]*D[a][b];
	      A[a-4]=B[a][b]/D[a][b]+16;
	      
	      B[a][b]=D[a][b]+C[a]*A[a];
	      B[a+1][b+5]=A[a]/D[a][b]*C[a];
	      
	      D[a][b]=A[a]-40;
	      D[a][b-1]=A[a]*C[a]-17;
	    }

    return 0;
}