#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(100, 340, 80, "random");
	int *B = create_one_dim_int(560, "random");
	int *D = create_one_dim_int(40, "random");
	int *C = create_one_dim_int(740, "random");
	int ***A = create_three_dim_int(780, 690, 990, "random");

	for (int c = 0; c < 37; c++)
	  for (int b = 0; b < 37; b++)
	    for (int a = 0; a < 37; a++)
	    {
	      
	      D[a]=D[a+3]+27;
	      
	      C[a]=C[a+1]/B[a]-A[a][b][c]+D[a];
	      
	      D[a]=D[a+2]*19-E[a][b][c];
	      
	      C[a]=C[a+5]/26;
	      
	      C[a]=D[a]/A[a][b][c]*C[a];
	    }

    return 0;
}