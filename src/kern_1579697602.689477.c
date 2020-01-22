#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(490, "ones");
	int ***A = create_three_dim_int(830, 770, 210, "ones");
	int ***C = create_three_dim_int(890, 880, 580, "ones");

	for (int c = 4; c < 208; c++)
	  for (int b = 3; b < 768; b++)
	    for (int a = 4; a < 489; a++)
	    {
	      
	      B[a]=B[a+1]/25;
	      
	      A[a][b][c]=42;
	      A[a+1][b+2][c+2]=0;
	      
	      int var_a=A[a][b][c]-37;
	      int var_b=A[a-2][b-3][c-4]+18;
	      
	      B[a]=B[a]-C[a][b][c]/A[a][b][c];
	      C[a][b][c]=B[a-4]/A[a][b][c]*C[a][b][c];
	      
	      A[a][b][c]=C[a][b][c]/17*B[a];
	      C[a][b][c]=C[a-3][b][c]-A[a][b][c];
	    }

    return 0;
}