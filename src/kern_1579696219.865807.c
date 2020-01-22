#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(580, "ones");
	float ***A = create_three_dim_float(100, 660, 110, "ones");
	float *B = create_one_dim_float(250, "ones");
	float ***C = create_three_dim_float(510, 790, 590, "ones");

	for (int c = 1; c < 107; c++)
	  for (int b = 3; b < 658; b++)
	    for (int a = 3; a < 97; a++)
	    {
	      
	      D[a]=D[a-1]-A[a][b][c]/B[a];
	      
	      C[a][b][c]=C[a-3][b-3][c-1]-0.629;
	      
	      C[a][b][c]=C[a+1][b+3][c+4]*0.905;
	      
	      D[a]=C[a][b][c];
	      
	      A[a][b][c]=A[a+1][b+2][c]-0.29;
	      
	      A[a][b][c]=0.763;
	    }

    return 0;
}