
// Struct for to-do items

typedef struct Todo {
    char name[100];
    char description[1000];
    int done;
} todo;


int add_new_item(todo* item)
{
    // ask user for name
    // validate
    // ask user for description
    // validate
}

void display(todo** list, int size)
{
    // for i in size
    // print out i - name\n
}


int display_bool(todo** list, int size, int done)
{
    // set up counter
    // for i in size
    // if list[i]->done == done
        // print i+1 - name - description (human readable numbers)
        // increment counter
    // return the number of done/not done items
}

int get_choice(int size){
    // fgets + sscanf
    // validate between 1 -> size+1 (human readable)
    // return number or -1
}

void remove_task(todo** list, int size, int item)
{
    // remove item
    // shuffle everything above down
    // for i=item -> size-1
    // replace list[i] with list[i+1]
    
    // realloc list to size-1
}

void free_list(todo** list, int size)
{
    // for i in size
        // free list[i]
    // free list
}

int main()
{
    
    // SET UP
    // set up dynamic array of todo*s
    todo** list = malloc(sizeof(todo*));
    // size counter
    int size = 0;

    // menu
    // print options
    printf("1 - Add new task\n2 - Complete task\n3 - Show todo list\n4 - Show complete items\n5 - Remove an item\n6 - Exit\n");
    int choice;
    do{
            printf("Enter menu option: \n");
    }while ((choice=get_choice(6))==-1);

    int rep = 1;

    while(rep){

        // switch on choice.

    // option 1: add new
        // add a new todo* to the array
        add_new_item(list[size]);
        //realloc list and increment size


    // option 2: Mark as done
        check = display_bool(list, size, 0);
        // make sure check is > 0 - don't bother if == 0.
        do{
            printf("Enter task to complete: \n");
        }while ((choice=get_choice(check))==-1);

        list[choice]->done = 1;



    // option 3: Show all to-do
    display_bool(list, size, 0);

    // option 4: show done
    display_bool(list, size, 1);


    // option 5: 
    display(list, size);
    do{
        printf("Enter task to delete: \n");
    }while((choice=get_choice(size))==-1);
    remove_task(list, size, choice);
    size--;


    // option 5: exit
    free_list(list, size);
    rep = 0;
    }

    return 0;

}