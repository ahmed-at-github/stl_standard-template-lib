## Iterators mnemonic 

random-access (vector, deque)
->, [] elem access 
v = *p read
*p = v write
++, --, +, -, +=, -= increment 
!=, ==, <, >, <=, >= compare 

bidirectional (list, set, map, multimap, multiset)
->
v = *p
*p = v
++, --
!=, ==

forward (forward_list, unordered_set, unordered_map)
->
v = *p
*p = v
++
!=, ==

