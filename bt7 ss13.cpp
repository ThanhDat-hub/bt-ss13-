#include <stdio.h>
#define max 100
 int initarray (int cols,int rows);
 int matrix[max][max];
 void printarray(int rows,int cols);       
int main() {
    int rows, cols;
    printf("Nhap so hang cua ma tran= ") ;
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran= ");
    scanf("%d", &cols);
   initarray(rows,cols);
   printarray(rows,cols);
}
int initarray(int rows,int cols){
	for(int i=0;i< rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d",matrix[i][j]); 
		} 
	} 
};
void printarray(int rows,int cols){
	for(int i=0;i< rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
};
