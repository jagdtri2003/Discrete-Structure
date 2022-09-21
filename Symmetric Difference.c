#include <stdio.h>


int* difference(int* set1,int Asize,int* set2,int Bsize);
int* Union(int* set1,int Asize,int* set2,int Bsize);

int main(){
	
	int s1,s2,i,size3,size4,size;
	int *set3 ;//,*set4,*res;
	int *res;
	printf("Enter The Number of Element in Set A: ");
	scanf("%d",&s1);
	int set1[s1];
	
	for (i=0;i<s1;i++){
		printf("Enter the %d element of Set A :",i+1);
		scanf("%d",&set1[i]);
	}
	printf("Enter The Number of Element in Set B: ");
	scanf("%d",&s2);
	int set2[s2];
	for (i=0;i<s2;i++){
		printf("Enter the %d element of Set B :",i+1);
		scanf("%d",&set2[i]);
	
	}
	
	set3 =difference(set1,s1,set2,s2);
	// set4=difference(set2,s2,set1,s1);
	size3=sizeof(set3)/sizeof(set3[0]);
	// size4=sizeof(set4)/sizeof(set4[0]);
	int arr[]={1,3,5,6},arr1[]={1,2,3,4};
	res=Union(arr,4,arr1,4);
	size=(sizeof(res));
	
	
	printf("A - B is : ");

	for (i=0;i<=size3;i++){

		printf("%d ",set3[i]);

	}

	printf("\n(A-B)U B : ");

	for (i=0;i<=size;i++){

		printf("%d ",res[i]);

	}

	// printf("A - B is : ");
	// for (i=0;i<size4;i++){

	// 	printf("%d ",set4[i]);

	// }
	
	// size=sizeof(res)/sizeof(res[0]);
	// for (i=0;i<size;i++){

	// 	printf("%d ",res[i]);

	// }	
	return 0;
}

int* difference(int* set1,int Asize,int* set2,int Bsize){
	
	static int set3[10];
	int i,j,k,l=0,flag,flag1;
	for (i=0;i<Asize;i++){
		flag=1;
		for (j=0;j<Bsize;j++){

			if (set1[i]==set2[j]){
				flag=0;
				break;
			}
		}

		if (flag){
			flag1=1;		
			for (k=0;k<l;k++){
	
				if (set1[i]==set3[k]){
					flag1=0;
					break;					
				}
			}
			
			if (flag1){

				set3[l]=set1[i];
				l++;
			}
		}
	}
	return set3;
}

int* Union(int* set1,int Asize,int* set2,int Bsize){
	
	static int UNset3[30];
	int i,j,k=0,flag;

	for (i=0;i<Asize;i++){
		flag=1;
		for (j=0;j<k;j++){
			if (set1[i]==UNset3[j]){
				flag=0;
				break;
			}
		}
		if (flag){
			UNset3[k]=set1[i];
			k++;
		}
	}
	for (i=0;i<Bsize;i++){
		flag=1;
		for (j=0;j<k;j++){
			if (set2[i]==UNset3[j]){
				flag=0;
				break;
			}
		}
		if (flag){
			UNset3[k]=set2[i];
			k++;
		}
	}
	
	return UNset3;


}
