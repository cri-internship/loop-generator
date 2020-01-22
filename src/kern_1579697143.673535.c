#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(640, "ones");
	int ***A = create_three_dim_int(460, 10, 140, "ones");
	int ***C = create_three_dim_int(820, 370, 460, "ones");
	int ***B = create_three_dim_int(510, 210, 160, "ones");

	for (int c = 0; c < 136; c++)
	  for (int b = 0; b < 7; b++)
	    for (int a = 0; a < 458; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b+4][c+5]+35;
	      
	      C[a][b][c]=C[a+5][b+5][c+4]+B[a][b][c];
	      
	      D[a]=A[a][b][c]-C[a][b][c]+D[a];
	      A[a][b][c]=A[a+2][b+3][c+4]-D[a]*C[a][b][c]/B[a][b][c];
	    }

    return 0;
}