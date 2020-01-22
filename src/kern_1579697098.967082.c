#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(640, 1000, 530, "random");
	int ***B = create_three_dim_int(390, 210, 620, "random");

	for (int c = 0; c < 526; c++)
	  for (int b = 0; b < 206; b++)
	    for (int a = 0; a < 388; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+4][c+4]/A[a][b][c];
	      
	      A[a][b][c]=A[a+1][b+3][c+2]*48;
	      
	      A[a][b][c]=A[a+1][b+4][c+2]+B[a][b][c];
	      
	      B[a][b][c]=A[a][b][c];
	      
	      A[a][b][c]=B[a][b][c]*A[a][b][c];
	    }

    return 0;
}