#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(710, 840, 500, "ones");
	float ***C = create_three_dim_float(100, 950, 460, "ones");
	float ***A = create_three_dim_float(340, 570, 420, "ones");

	for (int c = 5; c < 455; c++)
	  for (int b = 4; b < 840; b++)
	    for (int a = 4; a < 95; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-3][c-4]*0.097;
	      
	      C[a][b][c]=C[a-2][b-4][c-5]+0.493;
	      
	      C[a][b][c]=C[a+5][b+2][c+5]/B[a][b][c]*A[a][b][c];
	      
	      C[a][b][c]=C[a+4][b][c+3]/0.439;
	      
	      C[a][b][c]=B[a][b][c]+C[a][b][c]-A[a][b][c];
	      B[a][b][c]=B[a-2][b-3][c-3]*A[a][b][c]/C[a][b][c];
	    }

    return 0;
}