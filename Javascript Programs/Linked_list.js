// Program to find middle element of LinkedList using JavaScript

// Solution:
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    constructor(head = null) {
        this.head = head;
    }

    add(data) {
        let node = new Node(data);

        if (this.head == null)
            this.head = node;
        else {
            let current = this.head;
            while (current.next) {
                current = current.next;
            }
            current.next = node;
        }
    }

    findMiddle() {
        let pointer = this.head;
        let fastPointer = this.head;

        while (pointer.next != null && fastPointer.next && fastPointer.next.next != null) {
            pointer = pointer.next;
            fastPointer = fastPointer.next.next
        }

        return pointer.data;
    }
}

let ll = new LinkedList();

ll.add(10);
ll.add(20);
ll.add(30);
ll.add(40);
ll.add(50);
//console.log(JSON.stringify(ll))
let middle = ll.findMiddle();
console.log(middle);