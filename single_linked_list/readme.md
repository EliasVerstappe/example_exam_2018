# Single Linked List

Check out the basic concept of a Linked List at [https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/linked%20lists.html](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/linked%20lists.html).

Implement a to_string() method inside the class `LinkedList` so the main would output:

```text
Starting with: List is empty
Adding some data: HELLO [5 elements]
Adding more data: HELLO WORLD [11 elements]
Removed H from the front: ELLO WORLD [10 elements]
Removed D from the back: ELLO WORL [9 elements]


Second list
Adding some data: X [1 elements]
Removed X from the back: List is empty
Adding some data: O [1 elements]
Removed O from the front: List is empty
```

ALso implement a method clear that destroys all the nodes in the list. Make sure to test it by adding some test code to the main. Feel free to create a third list, add some items and clear the list.