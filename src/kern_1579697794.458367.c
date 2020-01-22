#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(660, 240, 890, "ones");
	float **A = create_two_dim_float(930, 590, "ones");

	for (int c = 2; c < 885; c++)
	  for (int b = 0; b < 239; b++)
	    for (int a = 5; a < 657; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b][c-2]+0.574;
	      
	      A[a][b]=B[a][b][c]/A[a][b];
	      B[a][b][c]=B[a+3][b+1][c+5]+0.08;
	      
	      A[a][b]=A[a][b]-B[a][b][c];
	      B[a][b][c]=A[a][b+3]/B[a][b][c];
	    }

    return 0;
}