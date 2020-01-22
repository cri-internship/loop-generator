#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(370, 410, "ones");
	int ***B = create_three_dim_int(130, 720, 740, "ones");

	for (int d = 3; d < 738; d++)
	  for (int c = 0; c < 405; c++)
	    for (int b = 4; b < 127; b++)
	      for (int a = 4; a < 127; a++)
	      {
	        
	       A[a][b]=B[a][b][c]+A[a][b];
	       B[a][b][c]=B[a-4][b][c-3]-17;
	        
	       int var_a=B[a][b][c]-6;
	       int var_b=B[a+3][b][c+2]/8;
	        
	       int var_c=A[a][b]*9;
	       int var_d=A[a+2][b+5]*34;
	        
	       int var_e=A[a][b]*20;
	       int var_f=A[a+2][b+1]*17;
	      }

    return 0;
}