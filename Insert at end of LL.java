/****************************************************************

 Following is the class structure of the Node class:

 class Node {
     public int data;
     public Node next;
     public Node prev;

     Node()
     {
         this.data = 0;
         this.next = null;
         this.prev = null;
     }

     Node(int data)
     {
         this.data = data;
         this.next = null;
         this.prev = null;
     }

     Node(int data, Node next, Node prev)
     {
         this.data = data;
         this.next = next;
         this.prev = prev;
     }
 };

 *****************************************************************/

public class Solution
{
    public static Node insertAtTail(Node list, int K) {
        // Write your code here

        Node temp = list;

        if(list == null){
            return new Node(K);
        }

        while(temp.next != null){
            temp = temp.next;
        }

        Node newnode = new Node(K);
        temp.next = newnode;
        newnode.prev = temp;

        return list;
    }
}
