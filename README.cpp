# test1

```
#include <iostream>

int median(int v1, int v2, int v3)
{
if(v1>v2 && v1<v3) return v1;
else if(v2>v1 && v2<v3) return v2;
else if(v3>v1 && v3<v2) return v3;
}

unsigned count_of_bits(unsigned value)
{
  static unsigned count;
  while( value != 1){
  value = value/2;
  if(value %2) count++;
}
return ++count;  
}

struct node_t {
    node_t * next;
    int value;
};

//   2      1      0
// +---+  +---+  +---+
// | 1 |->| 2 |->| 3 |
// +---+  +---+  +---+

int lenght(node_t * head){
int len = 0;
if(head != nullptr)
len++;
node_t* last = head;
while(last->next != nullptr){
 last= last->next;
 len++;
}
return len;
}

node_t * node_from_back( node_t * head, unsigned int idx )
{
int len = lenght(head);
    if(idx > len){
        return false;
    }
    node_t * last = head;
    while(len-1 != idx ){
        last=last->next;
        --len;
    }
    return last;
    
}


// +---+  +---+  +---+  +---+  +---+  +---+
// | 1 |->| 2 |->| 3 |->| 4 |->| 5 |->| 6 |
// +---+  +---+  +---+  +---+  +---+  +---+
//                        ^             |
//                        |             V
//                      +---+  +---+  +---+
//                      | 9 |<-| 8 |<-| 7 |
//                      +---+  +---+  +---+

bool has_cycle( node_t * head )
{
     node_t* last = head;
     node_t* last1 = head->next;
    while(last->next != last1->next && last->next && last1->next->next){
        last=last->next;
        last1=last1->next->next;

    }
    if(last == last1) return true;
    else return false;
}

struct node2_t
{
    node_t * left;
    node_t * right;
    int value;
};

node2_t * mirror( node2_t * root )
{
    
}

//                +----+                                              +----+
//                | 08 |                                              | 08 |
//                +----+                                              +----+
//                  /\                                                  /\
//                 /  \                                                /  \
//           +----+    +----+                                    +----+    +----+
//           | 04 |    | 10 |                                    | 10 |    | 04 |
//           +----+    +----+                                    +----+    +----+
//             /         /\                                        /\          \
//            /         /  \                                      /  \          \
//      +----+    +----+    +----+                          +----+    +----+     +----+
//      | 03 |    | 09 |    | 13 |         ---->            | 13 |    | 09 |     | 03 |
//      +----+    +----+    +----+                          +----+    +----+     +----+
//                            /                                \
//                           /                                  \
//                     +----+                                    +----+
//                     | 11 |                                    | 11 |
//                     +----+                                    +----+
//                        \                                     /
//                         \                                   /
//                          +----+                       +----+
//                          | 12 |                       | 12 |
//                          +----+                       +----+


int main(int argc, const char * argv[]) {

    return 0;
}
```
