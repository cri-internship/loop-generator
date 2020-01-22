#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(150, 470, 350, "ones");
	double ***A = create_three_dim_double(740, 350, 670, "ones");
	double ***D = create_three_dim_double(440, 310, 240, "ones");
	double *C = create_one_dim_double(490, "ones");

	for (int c = 3; c < 235; c++)
	  for (int b = 5; b < 309; b++)
	    for (int a = 3; a < 146; a++)
	    {
	      
	      C[a]=C[a-3]/B[a][b][c]-A[a][b][c];
	      
	      B[a][b][c]=B[a-3][b-5][c]+D[a][b][c]-0.532;
	      
	      A[a][b][c]=A[a-1][b][c-3]*0.159;
	      
	      B[a][b][c]=B[a][b+3][c+5]+C[a];
	      
	      B[a][b][c]=B[a+4][b+3][c+1]+A[a][b][c]*C[a];
	      
	      D[a][b][c]=D[a+5][b+1][c+5]-0.721;
	    }

    return 0;
}