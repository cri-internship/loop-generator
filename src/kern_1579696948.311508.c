#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(60, 170, 950, "zeros");
	int ***B = create_three_dim_int(480, 30, 840, "zeros");

	for (int c = 2; c < 837; c++)
	  for (int b = 2; b < 25; b++)
	    for (int a = 2; a < 56; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b][c]-A[a][b][c];
	      
	      A[a][b][c]=A[a+4][b+5][c+4]*19;
	      
	      B[a][b][c]=B[a+4][b+4][c+3]*A[a][b][c];
	      
	      B[a][b][c]=B[a][b][c]+A[a][b][c];
	      A[a][b][c]=B[a+4][b+4][c]/A[a][b][c];
	      
	      A[a][b][c]=A[a][b][c]+15;
	      B[a][b][c]=A[a-2][b-2][c-2]/B[a][b][c];
	      
	      A[a][b][c]=B[a][b][c]/24;
	      B[a][b][c]=B[a+5][b+5][c+1]-A[a][b][c];
	    }

    return 0;
}