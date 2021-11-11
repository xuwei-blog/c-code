#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}

	}
	else
	{
		// ºó---->Ç°
		while (num--)
		{
			*((char*)dest+num) = *((char*)src+num);
			
		}
	}
	return ret;
}

int main()
{
	

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	my_memmove(arr1, arr1+3, 20);

	return 0;
}