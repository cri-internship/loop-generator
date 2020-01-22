#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(850, 40, "random");
	double ***A = create_three_dim_double(260, 760, 790, "random");

	for (int c = 1; c < 790; c++)
	  for (int b = 5; b < 39; b++)
	    for (int a = 4; a < 260; a++)
	    {
	      
	      B[a][b]=B[a-4][b-5]+A[a][b][c];
	      
	      A[a][b][c]=A[a-2][b-5][c-1]/0.985;
	      
	      B[a][b]=B[a+1][b+1]*0.943;
	      
	      A[a][b][c]=B[a][b]*0.662;
	      B[a][b]=B[a+4][b+1]*A[a][b][c];
	    }

    return 0;
}