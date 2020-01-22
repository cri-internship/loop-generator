#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(280, 40, 490, "ones");
	float ***C = create_three_dim_float(930, 190, 40, "ones");
	float ***B = create_three_dim_float(650, 570, 160, "ones");

	for (int c = 3; c < 35; c++)
	  for (int b = 0; b < 185; b++)
	    for (int a = 4; a < 646; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b][c-3]+0.844;
	      
	      C[a][b][c]=C[a+3][b+5][c+5]*A[a][b][c]/B[a][b][c];
	      
	      B[a][b][c]=B[a][b][c]+C[a][b][c];
	      A[a][b][c]=B[a+4][b+2][c+1]/A[a][b][c]*C[a][b][c];
	      
	      C[a][b][c]=B[a][b][c]-A[a][b][c]*C[a][b][c];
	      C[a][b][c]=B[a+3][b+2][c+4]/A[a][b][c];
	    }

    return 0;
}