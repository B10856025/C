struct node{
	int id;
	int data;
	struct node *next;
};

struct node *createList(int *, int);
void printLiat(struct node *);
void freeList(struct node *);
void insertNode(struct node *, int);
struct node *searchNode(struct node *, int);
struct node *deleteNode(struct node *, struct node *);
struct node *reverse(struct node *);
