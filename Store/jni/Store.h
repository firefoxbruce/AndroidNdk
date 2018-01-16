#ifndef _StORE_H_
#define _StORE_H_
//#include<cstdint.h>
#define STORE_MAX_CAPACITY 16
typedef enum{
}StoreType;

typedef union{
}StoreValue;

typedef struct{
	char* mKey;
	StoreType mType;
	StoreValue mValue;
}StoreEntry;

typedef struct{
	StoreEntry mEntries[STORE_MAX_CAPACITY];
	int mLength;
}Store;


#endif
