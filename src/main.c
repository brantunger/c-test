#include "dbl_linked_list.h"

// Driver code to test the doubly linked list
int main()
{
    insert_at_head(10);
    insert_at_head(20);
    insert_at_tail(30);
    display_forward();  // expected output: 20 10 30
    display_backward(); // expected output: 30 10 20
    delete_at_head();
    delete_at_tail();
    display_forward();  // expected output: 10
    display_backward(); // expected output: 10

    return 0;
}