#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(800, 460, "zeros");
	float ***B = create_three_dim_float(20, 690, 350, "zeros");
	float ***A = create_three_dim_float(460, 260, 440, "zeros");

	for (int c = 0; c < 345; c++)
	  for (int b = 2; b < 260; b++)
	    for (int a = 0; a < 19; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b][c+2]*0.902;
	      
	      B[a][b][c]=0.245;
	      B[a][b-2][c]=0.671;
	      
	      A[a][b][c]=B[a][b][c]*0.929-A[a][b][c];
	      B[a][b][c]=B[a+1][b+3][c+5]*A[a][b][c]/C[a][b];
	    }

    return 0;
}