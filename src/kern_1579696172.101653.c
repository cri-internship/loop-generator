#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(70, 280, 880, "zeros");
	int ***B = create_three_dim_int(540, 920, 170, "zeros");

	for (int c = 4; c < 170; c++)
	  for (int b = 5; b < 279; b++)
	    for (int a = 0; a < 69; a++)
	    {
	      
	      A[a][b][c]=1;
	      A[a+1][b+1][c+5]=37;
	      
	      B[a][b][c]=B[a][b][c]+A[a][b][c];
	      A[a][b][c]=B[a][b-5][c-4]*A[a][b][c];
	    }

    return 0;
}