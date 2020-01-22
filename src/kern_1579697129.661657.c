#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(120, 50, 980, "ones");
	int ***B = create_three_dim_int(580, 930, 740, "ones");

	for (int c = 5; c < 738; c++)
	  for (int b = 5; b < 45; b++)
	    for (int a = 5; a < 115; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b+3][c+2]-A[a][b][c];
	      
	      A[a][b][c]=A[a+5][b+2][c+4]*3;
	      
	      int var_a=B[a][b][c]/43;
	      int var_b=B[a-5][b-5][c-5]+40;
	      
	      A[a][b][c]=A[a][b][c]*B[a][b][c];
	      B[a][b][c]=A[a+4][b+5][c+5]/B[a][b][c];
	      
	      int var_c=A[a][b][c]/37;
	      int var_d=A[a-2][b-5][c-5]-13;
	    }

    return 0;
}