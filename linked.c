#include<stdio.h>
#include<stdlib.h>

struct list{
	char name[10];
	int score;
	struct list *link;
};



int main(void)
{
	struct list *list1, *head, *pre, *next;
	int i;
	head = NULL;
	for (i = 0; i < 3; i++){
		list1 = (struct list *)malloc(sizeof(struct list));
		scanf_s("%s %d", list1->name, sizeof(list1->name),&(list1->score));
		if (head == NULL)
			head = list1;
		else
			pre->link = list1;
		list1->link = NULL;
		pre = list1;
	}
	puts("-----------------");
	for (next = head; next != NULL; next = next->link)
		printf("%s %d\n", next->name, next->score);
	puts("---------------");
	while (head != NULL){
		next = head->link;
		printf("삭제 완료(%s %d)\n", head->name, head->score);
		free(head);
		head = next;
	}
	return 0;
}
