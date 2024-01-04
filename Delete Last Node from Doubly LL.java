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
    public static Node deleteLastNode(Node head) {
        // Write your code here

        if(head == null){
            return null;
        }

        Node temp = head;
        if(temp.next == null){
            return null;
        }

        if(temp.next.next == null){
            temp.next = null;
            return head;
        }
        while(temp.next.next != null){
            temp = temp.next;
        }
        temp.next.prev = null;
        temp.next = null;

        return head;
    }
}
