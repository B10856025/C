struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *createList(int *, int);
void printLiat(NODE *);
void freeList(NODE *);
void insertNode(NODE *, int);
NODE *searchNode(NODE *, int);
NODE *deleteNode(NODE *, NODE *);

