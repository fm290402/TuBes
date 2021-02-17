/*Program : DispMatrix7x7.c
* Deskripsi : Menampilkan papan permainan 7x7.
* Nama : Fadhil Muhammad
* tanggal/ versi : 06 - januari - 2021 / 1
*/

void disp_matrix_7X7()
{
	int i;

	for(i=0;i<7;i++){
		printf("             |     |     |     |     |     |\n");
		printf("          %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  \n",matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3],matrix[i][4],matrix[i][5],matrix[i][6]);
		if(i!=6)
			printf("        ----- ----- ----- ----- ----- ----- ----- \n");
	}
	printf("\n\n");
}