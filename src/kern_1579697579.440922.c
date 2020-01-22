#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(810, 930, 350, "ones");
	int ***B = create_three_dim_int(100, 470, 30, "ones");
	int *C = create_one_dim_int(30, "ones");

	for (int c = 0; c < 27; c++)
	  for (int b = 0; b < 469; b++)
	    for (int a = 0; a < 27; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+1][c+3]*C[a]-A[a][b][c];
	      
	      C[a]=C[a+3]*13;
	      
	      C[a]=C[a+2]*B[a][b][c]/A[a][b][c];
	      
	      A[a][b][c]=A[a+3][b][c]*C[a];
	      
	      A[a][b][c]=C[a]+B[a][b][c];
	    }

    return 0;
}