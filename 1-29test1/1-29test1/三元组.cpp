typedef struct
{
	float val;
	int i;
	int j;

}Trimat;
#define maxSize 100
int k;
Trimat trimat[maxSize + 1]; //+1是为了 存储 数据个数,行数,列数
float val = trimat[k].val;
int i = trimat[k].i;
int j = trimat[k].j;