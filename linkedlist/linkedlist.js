
// JavaScript program to find
// middle of linked list
var head; // Defining the head pointer
/* Linked list node */
class Node {
   constructor(val) {
      this.data = val;
      this.next = null;
   }
}
/* Function to print middle
of linked list */
function printMiddle(){
   var slow_ptr = head;
   var fast_ptr = head;
   if (head != null){
      while (fast_ptr != null &&
      fast_ptr.next != null){
         fast_ptr = fast_ptr.next.next;
         slow_ptr = slow_ptr.next;
      }
      document.write(
         "The middle element is [" + slow_ptr.data + "] <br/><br/>"
      );
   }
}
/* Inserts a new Node at front of the list. */
function push(new_data) {
   /*
      * 1 & 2: Allocate the Node & Put in the data
   */
   var new_node = new Node(new_data);
   /* 3. Make next of new Node as head */
   new_node.next = head;
   /* 4. Move the head to point to new Node */
   head = new_node;
}
/*
   * This function prints contents of linked
   list starting from the given node
*/
function printList() {
   var tnode = head;
   while (tnode != null) {
      document.write(tnode.data + "->");
      tnode = tnode.next;
   }
   document.write("NULL<br/>");
}
for (i = 5; i > 0; --i) {
   push(i);
   printList();
   printMiddle();
}
