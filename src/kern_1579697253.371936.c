#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(890, 220, 520, "random");
	double ***B = create_three_dim_double(390, 820, 90, "random");
	double ***C = create_three_dim_double(540, 150, 390, "random");

	for (int c = 5; c < 85; c++)
	  for (int b = 5; b < 149; b++)
	    for (int a = 4; a < 388; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-4][c-4]+A[a][b][c];
	      
	      B[a][b][c]=B[a-2][b-5][c-5]/C[a][b][c];
	      
	      C[a][b][c]=C[a+3][b+1][c]+B[a][b][c]-0.528;
	      
	      B[a][b][c]=B[a+2][b+1][c+5]+0.692;
	      
	      C[a][b][c]=0.135;
	    }

    return 0;
}